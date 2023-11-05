#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
void solve(){
    string s; cin>>s;
    int lz = s.size();
    for(int i = 0 ; i<lz; i++){
        if(s[i] == 'H' || s[i] == 'Q' || s[i] == '9'){
           cy;
           return; 
        }
    }
    cn;
}

int main()
{
    Limon();

   
       solve();
    
}