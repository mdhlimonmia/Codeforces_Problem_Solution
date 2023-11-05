#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    string s;cin>>s;
    lli lz = s.size();
    lli ans = 0, c = 1;
    for (lli i = 0; i < lz; i++)
    {
        if(s[i] -'0' == c){
            ans++;
            // cout<<"1 "<<ans<<endl;
        }
        else if(s[i] == '0'){
            lli a = abs((c - 10));
            ans +=a+1;
            c = 10;
            // cout<<"2 "<<ans<<endl;
        }
        else{
            lli a = abs(c-(s[i] - '0'));
            ans += a+1;
            c = s[i] -'0';
            // cout<<"5 "<<ans<<endl;
        }
    }
    cout<<ans<<endl;
    
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