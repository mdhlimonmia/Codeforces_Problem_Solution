#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int x,k;cin>>x>>k;
    int sum;
    do{
        string s = to_string(x);
        int lz = s.size();
        sum = 0;
        for(auto u:s)sum+=u-'0';
        // cout<<sum<<endl;
        x++;
    }while(sum%k !=0);
    cout<<x-1<<endl;
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