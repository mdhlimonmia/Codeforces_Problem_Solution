#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

void solve(){
    string s;cin>>s;
    bool f = false;
    for (int i = 1; i < s.size(); i++)
    {
        if(s[i] != s[i-1]){
            f = true;
            swap(s[i],s[i-1]);
        }
    }
    if(f){
        cout<<"YES\n";
        cout<<s<<endl;
    }else cout<<"NO\n";
}

int main()
{
    Limon();
    int _; cin >> _;
    while (_--) {
        solve();
    }
    return 0;
}