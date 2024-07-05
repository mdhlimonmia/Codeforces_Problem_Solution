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

void solve() {
    lli n,f,k; cin>>n>>f>>k;
    vector<lli>v(n);
    for(auto &u:v)cin>>u;
    lli key = v[f-1];
    sort(v.begin(),v.end(), greater<int>());
    // for(auto u:v)cout<<u<<" ";
    // cout<<endl;
    lli l = 0, r = n-1;
    lli lo,up;
    while(l<=r){
        lli m = (l+r)/2;
        if(v[m]<= key){
            lo = m;
            r = m - 1;
        }else l = m+1;
    }  
    l = 0, r = n-1;
    while(l<=r){
        lli m = (l+r)/2;
        if(v[m] >= key){
            up = m;
            l = m + 1;
        }else r = m - 1;
    }
    // dbg(lo,up);  
    if(up<= k-1)yes;
    else if( lo> k -1)no;
    else cout<<"MAYBE\n";  
}

int main() {
    // Limon();
    int _; cin >> _;
    for(int i = 1; i <= _; i++) {
        solve();
    }
    return 0;
}