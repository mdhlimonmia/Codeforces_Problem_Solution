#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

void solve(){
    int a,b,c; cin >> a>>b>>c;
    int k;
    k = (a == b)?c:(a==c)?b:a;
    cout<<k<<endl;  
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