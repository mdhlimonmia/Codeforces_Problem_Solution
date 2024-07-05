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
    lli n; cin >> n;
    vector<lli>v(n);
    for(lli i = 0; i<n; i++)cin>>v[i];
    sort(v.begin(),v.end());
    if(v[0] == 1){
        yes;
        return;
    }
    lli k = 0, t = 0;
    map<lli,lli>m;
    for(lli i = 0; i<n; i++){
        //if(t)m[v[i]]++;
        if(v[i]%v[0] != 0){
            if(k == 0){
                k = v[i];
                // m[v[i]]++;
                t = i;
            }
            else k = __gcd(k,v[i]);
        }
        // if(k!=0 && m[k] == 0){
        //     no;
        //     return;
        // }
        if(k==1){
            no;
            return;
        }
    }
    // dbg(k);
    if(k==0){
        yes;
        return;
    }
    bool ans = binary_search(v.begin(),v.end(),k);
    // dbg(ans);
    if(ans)yes;
    else no;
}

int main() {
    Limon();
    lli _; cin >> _;
    for(lli i = 1; i <= _; i++) {
        solve();
    }
    return 0;
}