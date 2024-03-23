#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n; cin>>n;
    string s; cin>>s;
    string ans = "";
    for (int i = n-1; i>=0; i--)
    {
        if(s[i] == '0'){
            int x = (s[i-2] - '0') * 10 + s[i-1] - '0';
            char c = x+96;
            ans += c;
            i-=2;

        }
        else{
            int x = s[i] - '0';
            char c = x + 96;
            ans +=c;

        }
    }
    reverse(ans.begin(), ans.end());
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