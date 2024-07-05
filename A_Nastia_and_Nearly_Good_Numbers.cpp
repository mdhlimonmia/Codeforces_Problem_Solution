#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define ld long double

void solve(){
    lli a,b; cin >> a>>b;
    if(b==1)cout<<"NO\n";
    else cout<<"YES\n"<<a<<" "<<a*b<<" "<<a*b+a<<endl;
}

int main()
{
    Limon();
    int _; cin >> _;
    for(int i = 1; i<=_;i++) {
        solve();
    }
    return 0;
}