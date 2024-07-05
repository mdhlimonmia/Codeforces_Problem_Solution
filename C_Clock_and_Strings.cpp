#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

void solve(){
    int a,b,c,d; cin>>a>>b>>c>>d;
    bool f = false;
    int x,y,p,q;
    x = min(a,b), y = max(a,b), p = min(c,d), q = max(c,d);
    a = x, b=y, c= p, d = q;
    if(a<c && b>c && (a>d || b<d)) f= true;
    if(a<d && b>d && (a>c || b<c)) f = true;
    if(c<a && d>a && (c>b || d<b)) f = true;
    if(c<b && d>b && (c>a || d<a)) f = true;
    // if(a<c && d < b) f = false;
    // if(c < a && b < d) f = false;
    // if(a < d && b < c) f = false;
    // if( a > c && b>d) f = false;


    if(f)cout<<"YES\n";
    else cout<<"NO\n";
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