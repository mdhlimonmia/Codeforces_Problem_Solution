#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    lli ans = 0;
    char c;
    for (int i = 0; i < n; i++)
    {
        cin>>c;
        if(c=='+')ans++;
        else ans--;
    }
    cout<<abs(ans)<<endl;
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