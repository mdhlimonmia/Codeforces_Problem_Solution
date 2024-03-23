#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    string s;cin>>s;
    int lz=s.size();
    for (int i = 0; i <lz-1; i++)
    {
        cout<<s[i];
        if(((s[i] >='a' && s[i]<='z' ) || s[i] == '0') && (s[i+1] >='1' && s[i+1]<='9')){
            if(i+1 != lz-1) cout<<s[i+1];
            break;
        }
        
    }
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