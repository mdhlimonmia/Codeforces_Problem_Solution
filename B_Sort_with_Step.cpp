#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n,t;cin>>n>>t;
    map<int, int>m;
    int x;
    int ans = t, p = 0;
    for (int i = 1; i <= n; i++)
    {
        cin>>x;
        int c = abs(i-x);
        if(__gcd(ans, c) != ans)p++;
    }
    // cout<<"p = "<<p<<endl;
    if(p == 0)cout<<0<<endl;
    else if(p <= 2)cout<<1<<endl;
    else cout<<-1<<endl;

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