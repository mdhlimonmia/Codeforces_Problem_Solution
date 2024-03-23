#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    string s; cin>>s;
    int ans = 0;
    for(int i = 0; i<n-2; i++){
        string t = "";
        t +=s[i]; t += s[i+1]; t += s[i + 2];
        // cout<<t<<" ";
        if(t == "pie" || t == "map"){
            ans++;
            s[i+2] = 'k';
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