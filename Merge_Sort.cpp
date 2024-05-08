#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
int mx = 2e5+123,n;
vector<lli>arr(mx);

void merge(lli l, lli m, lli r){
    vector<lli>tem(r-l+1);
    lli k = 0, x = l, y = m+1;
    for(lli i = l; i<=r; i++){
        if(x>m){
            tem[k] = arr[y];
            y++,k++;
        }
        else if(y>r){
            tem[k] = arr[x];
            x++,k++;
        }
        else if(arr[x]<=arr[y]){
            tem[k] = arr[x];
            x++,k++;
        }else{
            tem[k] = arr[y];
            y++,k++;
        }
    }
    k = 0;
    for(lli i = l; i<=r; i++){
        arr[i] = tem[k];
        k++;
    }
}

void mergeSort(lli l, lli r){
    lli mid = (l+r)/2;
    if(l==r)return;
    mergeSort(l, mid);
    mergeSort(mid+1, r);
    merge(l,mid,r);
    // cout<<"l:"<<l<<" r: "<<r<<endl;
    // for(lli i = 1; i<=n; i++)cout<<arr[i]<<" ";
    // cout<<endl;

}

int main()
{
    Limon();

    cin>>n;
    for(lli i = 1; i<=n; i++)cin>>arr[i];
    mergeSort(1,n);
    lli ans = 1;
    for(lli i = 2; i<=n; i++){
        if(arr[i] != arr[i-1])ans++;
    }
    cout<<ans<<endl;
}