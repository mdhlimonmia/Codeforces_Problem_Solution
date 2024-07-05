// #include <bits/stdc++.h>
// using namespace std;
// #define endl '\n'
// #define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// #define lli long long int
// #define ld long double

// #define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
// void faltu () {            cerr << endl;}
// template < typename T, typename ... hello>void faltu( T arg, const hello &... rest) {cerr << arg << ' ';faltu(rest...);}

// const lli mx = 1e6+123;
// lli arr[mx][3];

// void solve(){
//     lli n; cin >> n;
//     vector<lli>v(n);
//     for(int i = 0; i<n; i++)cin>>v[i];
//     lli ans = 0;
    
//     for(int i = 0; i<=n-3; i++){
//         arr[i][0] = v[i];
//         arr[i][1] = v[i+1];
//         arr[i][2] = v[i+2];
//     }
//     for(int i = 0; i<=n-3; i++){
//         for(int j = i+1; j<=n-3; j++){
//             if(arr[i][0] != arr[j][0] && arr[i][1] == arr[j][1] && arr[i][2] == arr[j][2])ans++;
//             if(arr[i][0] == arr[j][0] && arr[i][1] != arr[j][1] && arr[i][2] == arr[j][2])ans++;
//             if(arr[i][0] == arr[j][0] && arr[i][1] == arr[j][1] && arr[i][2] != arr[j][2])ans++;
//         }
//     }
//     cout<<ans<<endl;
// }

// int main()
// {
//     Limon();
//     int _; cin >> _;
//     for(int i = 1; i<=_;i++) {
//         solve();
//     }
//     return 0;
// }

#include <iostream>
#include <iomanip>
#include <fstream>
#include <vector>
#include <set>
#include <queue>
#include <cmath>
#include <map>
#include <algorithm>
#include <numeric>
#include <stack>
#include <cstring>
#include <bitset>
#include <climits>
#include <valarray>
#include <list>
#include <unordered_map>
#include <unordered_set>
#include <complex>
#define int long long int
#define double long double
#define endl '\n'
#define mod 1000000007
#define inf 2000000000000000000
using namespace std;
// #include <ext/pb_ds/assoc_container.hpp>
// #include <ext/pb_ds/tree_policy.hpp>
// using namespace __gnu_pbds;
// #define ordered_set tree < pair<int,int> ,  nuint_type ,  less<pair<int,int>> ,  rb_tree_tag ,  tree_order_statistics_node_update>
void solve(){
//    ifstream cin("inp.in");
    int n; cin >> n;
    int ar[n];
    for (int i = 0; i < n; i++) cin >> ar[i];
    map<array<int,2>, int> f2,l2,sides;
    map<array<int,3>, int> mp;
    int ans = 0;
    for (int i = 0; i+2 < n; i++){
        int a = ar[i], b = ar[i+1], c = ar[i+2];
        ans += f2[{a,b}]-mp[{a,b,c}];
        ans += l2[{b,c}]-mp[{a,b,c}];
        ans += sides[{a,c}]-mp[{a,b,c}];
        f2[{a,b}]++;
        l2[{b,c}]++;
        sides[{a,c}]++;
        mp[{a,b,c}]++;
    }
    cout << ans << endl;
}

signed main(){
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);

    int t = 1;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}