#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    string a,b; cin>>a>>b;

    int x = a.size(), y = b.size();
    if(a[0] == b[0]){
        cout<<"YES\n";
        cout<<a[0]<<"*\n";
        return;
    }
    if(a[x-1] == b[y-1]){
        cout<<"YES\n";
        cout<<"*"<<a[x-1]<<endl;
        return;
    }
    for(int i = 0; i<x-1; i++){
        for(int j = 0; j<y-1; j++){
          if(a[i] == b[j] && a[i+1] == b[j+1]){
            cout<<"YES\n";
            cout<<"*"<<a[i]<<a[i+1]<<"*\n";
            return;
          }
        }
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