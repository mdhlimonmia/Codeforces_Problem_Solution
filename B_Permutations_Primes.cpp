#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
 int arr[200000];
void solve(){
    int n;cin>>n;
    if(n==1){
        cout<<1<<endl;
        return;
    }
    fill(arr,arr+n,0);
    arr[1] = 3;
    arr[n] = 2;
    arr[(n+1)/2] = 1;
    int k = 4;
    for (int i = 2; i<=n; i++)
    {
        if(arr[i] == 0) arr[i] =  k++;
    }
    for(int i = 1; i<=n; i++)cout<<arr[i]<<" ";
    cout<<endl;
}

int main()
{
    Limon();

    int _;cin>>_;
    while (_--)
    {
       solve();
    }
}