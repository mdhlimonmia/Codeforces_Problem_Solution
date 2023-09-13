#include<bits/stdc++.h>
using namespace std;

int main(){
    int n, k, arr[200000];
    cin>>n>>k;
    for(int i =0; i<n; i++){
        cin>>arr[i];
    }
    sort(arr, arr+n);
    int sub1 = arr[1] - arr[0], ans = 0;
    vector<int> v; v.push_back(0);
    for(int i=0; i<n-1; i++){
        int sub2 = arr[i+1] - arr[i];
        if(sub1 == sub2 && sub1 <= k){
            ans++;
            // cout<<arr[i]<<" "<<arr[i+1]<<" "<<sub1<<" "<<sub2<<" "<<ans<<endl;
            v.push_back(ans+1);
        }
        else{
            // cout<<ans<<"else"<<endl;
            sub1 = sub2;
            ans = 1;
            // cout<<ans<<"else"<<endl;
        }
    }
    int max = *max_element(v.begin(), v.end());
    cout<<n-max<<endl;
}