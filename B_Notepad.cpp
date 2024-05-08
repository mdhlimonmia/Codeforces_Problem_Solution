#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    string s,x; cin>>s;
    map<string,int>m;
    for(int i = 0; i<n-1; i++){
        x = "";
        x+=s[i], x+=s[i+1];
        if(m[x]>0 && m[x] != i){
            cout<<"YES\n";
            return;
        }
        if(m[x]==0) m[x] = i+1;
        // cout<<m[x]<<endl;
    }
    cout<<"NO\n";
    return;
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