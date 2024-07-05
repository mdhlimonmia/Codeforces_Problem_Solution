#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define dbg(args...) do {cerr << #args << ": "; faltu(args); } while(0)
void faltu() { cerr << endl; }
template <typename T, typename ...hello> void faltu(T arg, const hello&... rest) { cerr << arg << ' '; faltu(rest...); }
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl


#define lzero(x) __builtin_clzll(x)

void solve() {
   string a,b; cin>>a>>b;
   ll n,m;
    n = a.size();
    m = b.size();
    // dbg(a,b);
   int ans = 0;
   for(int i = 0; i<n; i++){
    int t = 0;
    for(int j = 0; j<m; j++){
        int k = i;
        if(a[k] == b[j]){
            while(a[k]==b[j] && j<m && k<n){
                t++;
                k++;
                j++;
            }
            ans = max(ans,t);
            t = 0;
        }
    }
   }

   map<char,int>mp; 
   for(auto u:a)mp[u]++;

   for(int i = 0; i<m; i++){
     if(mp[b[i]] != 0){
        int k = i, t = 0;
        for(int j = 0; j<n; j++){
            if(k>m)break;
            if(b[k] == a[j]){
                t++;
                k++;
            }
        }
        ans = max(ans,t);
        t = 0;
     }
   }
   cout<<(n+m)-ans<<endl;
}

int main() {
//    Limon();
   int _; cin >> _;
   for(int i = 1; i <= _; i++) {
       solve();
   }
   return 0;
}