#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
void solve(){
    int n,k;cin>>n>>k;
    int arr[n];
    for(int i =0;i<n; i++){
        cin>>arr[i];
    }
    vector<int>v;
    for (int i = 1; i < n; i++)
    {
        v.push_back(abs(arr[i]-arr[i-1]));
    }
    sort(v.begin(),v.end());
    int sum = 0;
    for (int i = 0; i < n-k; i++)
    {
        sum+=v[i];
    }
    cout<<sum<<endl;   
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