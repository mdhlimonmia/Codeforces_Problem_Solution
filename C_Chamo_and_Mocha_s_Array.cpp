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
    vector<int>v(n),t;
    for(lli i = 0; i<n; i++)cin>>v[i];
    lli ans = 0;
    for(int i = 0; i<n-1; i++){
        lli y = min(v[i],v[i+1]);
        lli t = 0;
        if(i<n-2){
            int arr[3];
            arr[0] = v[i];
            arr[1] = v[i+1];
            arr[2] = v[i+2];
            sort(arr,arr+3);
            t = arr[1];
        }
        ans = max({ans,y,t});
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
