#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    string s; cin>>s;
    int n = s.size();
    int x = 0,y=0;
    for (int i = 0; i < n; i++)
    {
        if(s[i]=='0')y++;
        else x++;
    }
    int ans =0;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == '1'){
            if(y>0){
                y--;
                ans++;
            }
            else break;
        }else{
            if(x>0){
                x--;
                ans++;
            }
            else break;
        }
    }
    
    cout<<n-ans<<endl;
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