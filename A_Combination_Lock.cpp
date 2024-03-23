#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int main()
{
    Limon();

    int n;cin>>n;
    string s,t; cin>>s>>t;
    lli ans = 0;
    for (int i = 0; i < n; i++)
    {
        int a,b;
        a = s[i] - '0';
        b = t[i] - '0';
        int k = min(abs(a-b), 10 - a + b);
        ans += min(k,(10 - b + a));
        
    }
    cout<<ans<<endl;
    
}