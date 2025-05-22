#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
void solve(){
    int k,n;cin>>n>>k;
    string s[n];
    for(int i = 0; i<n; i++){
        cin>>s[i];
    }

    for(int i = 0; i<n; i+=k){
        for(int j = 0; j<n; j+=k) cout<<s[i][j];
        cout<<endl;
    }
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