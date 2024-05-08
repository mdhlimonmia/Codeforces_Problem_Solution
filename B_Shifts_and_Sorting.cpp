#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    string s;cin>>s;
    int n = s.size();
    lli ans = 0, on = 0;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == '0'){
            if(on>0)ans += on+1;
        }else on++;
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