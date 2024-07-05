#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define ld long double
#define dbg(args...) do {cerr << #args << ": "; faltu(args); } while(0)
void faltu() { cerr << endl; }
template <typename T, typename ...hello> void faltu(T arg, const hello&... rest) { cerr << arg << ' '; faltu(rest...); }
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl


int main() {
    // Limon();
    lli l,r; cin >> l >> r;
    lli x = l, y = r;
    for(int i = 0; i<64; i++){
        // dbg(x&(1<<i),y&(1<<i));
        if((lli)(x&(1ll<<i)) == (lli)(y&(1ll<<i))){
            // dbg(i,x,y);
            if((x^1ll<<i) < r && (x^1ll<<i) > l) x ^=1ll<<i;
            else if((y^1ll<<i) < r && (y^1ll<<i) > l) y^=1ll<<i;
        }
    }
    // dbg(x,y);
    cout<<(x^y)<<endl;
    return 0;
}