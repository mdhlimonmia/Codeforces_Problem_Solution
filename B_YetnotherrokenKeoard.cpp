#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    string s; cin>>s;
    int n = s.size();
    int b=0, B=0;
    string ans = "";
    for (int i = n-1; i>=0; i--)
    {
        if(s[i]=='b')b++;
        else if(s[i]=='B')B++;
        else if(s[i]>='A' && s[i]<='Z'){
            if(B!=0)B--;
            else ans += s[i];
        }
        else{
            if(b !=0)b--;
            else ans += s[i];
        }
    }
    int lz = ans.size();
    for(int i = lz-1; i>=0; i--)cout<<ans[i];
    cout<<endl;
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
