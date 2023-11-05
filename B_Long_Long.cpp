#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
void solve(){
    lli n;cin>>n;
    lli arr[n];
    vector<lli>v;
    lli neg = 0,sum = 0;
    for (lli i = 0; i < n; i++)
    {
        cin>>arr[i];
        if(arr[i] != 0)v.push_back(arr[i]);
        if(arr[i]<0)neg++;
        sum += abs(arr[i]);
    }
    lli len = v.size();
    for(lli i = 1; i<len; i++)if(v[i]<0 && v[i-1]<0)neg--;
    cout<<sum<<" "<<neg<<endl;
    
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