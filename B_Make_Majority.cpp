#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    string s; cin>>s;
    int x = 0, y = 0;
    for(int i = 0; i<n; i++){
        if(s[i]=='1')y++;
        else{
            if(i==0)x++;
            else if(s[i-1] != '0')x++;
        }
    }
    if(x>=y)cout<<"NO\n";
    else cout<<"YES\n";
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