#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define ld long double

#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu () {            cerr << endl;}
template < typename T, typename ... hello>void faltu( T arg, const hello &... rest) {cerr << arg << ' ';faltu(rest...);}

void solve(){
    // int n; cin >> n;
    int a,b; cin>>a>>b;
    int ans = ceil(b/(2*1.0));
    // dbg(ans);
    a = a - ans*7;
    if(b%2 != 0)a-=4;
    // dbg(a);
    ans += max(0,(int)ceil(a/(15*1.0))); 
    if(ans == 0 && (a!=0 || b!=0))ans = 1;
    cout<<ans<<endl;

}

int main()
{
    // Limon();
    int _; cin >> _;
    for(int i = 1; i<=_;i++) {
        solve();
    }
    return 0;
}