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
    vector<lli>v(n),p(n+1);
    for(lli i = 0; i<n; i++)cin>>v[i];
    for(lli i = 0; i<n+1; i++)cin>>p[i];

    lli ans = 0;

    bool k = 0;
    lli tem = -1;
    for(lli i = 0; i<n; i++){
        ans += abs(v[i]-p[i]);
        if(k)continue;
        if(v[i]>=p[n] && p[i] <= p[n]) k = 1;
        else if (v[i]<= p[n] && p[i]>=p[n]) k = 1;
        else{
            lli e = v[i];
            if(tem == -1) tem = e;
            else if( abs(tem - p[n])>abs(e-p[n])) tem = e;
            e = p[i];
            if(tem == -1) tem = e;
            else if( abs(tem - p[n])>abs(e-p[n])) tem = e;
        }
    }
    
    if(k)ans++;
    else{
        ans += abs(tem - p[n]) + 1;
    }
    
    cout<<ans<<endl;
}

int main() {
    Limon();
    int _; cin >> _;
    for(int i = 1; i <= _; i++) {
        solve();
    }
    return 0;
}