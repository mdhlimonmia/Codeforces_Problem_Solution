#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int a,b,c;cin>>a>>b>>c;
    int k = b%3;
    if(k+c < 3 && b%3 != 0)cout<<-1<<endl;
    else{
        int ans = a;
        ans += ceil((b+c)/(3*1.0));
        cout<<ans<<endl;
    }
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