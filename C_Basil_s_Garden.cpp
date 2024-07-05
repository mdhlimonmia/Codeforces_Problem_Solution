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

template <typename T> // cin >> vector<T>
istream &operator>>(istream &istream, vector<T> &v)
{
   for (auto &it : v)
       cin >> it;
   return istream;
}
template <typename T> // cout << vector<T>
ostream &operator<<(ostream &ostream, const vector<T> &c)
{
   for (auto &it : c)
       cout << it << " ";
   return ostream;
}

bool isPrime(ll n)
{
   if (n <= 1)
   return false;
   for (int i = 2; i * i <= n; i++) {
       if (n % i == 0)
           return false;
   }
   return true;
}

// void solve() {
//    ll n;
//    cin >> n;
//    vector<ll>v(n); cin>>v;
//    ll mx = 0, idx = 0;
//    for(int i = 0; i<n; i++){
//     mx = max(mx,v[i]+i);
//    }
//    cout<<mx<<endl;
// }

void solve() {
   ll n;
   cin >> n;
   vector<ll>v(n); cin>>v;
   ll ans = 0, mx = 0;
   for(int i = n-1; i>0; i--){
    if(ans != 0){
        v[i] = max(v[i]-ans, v[i+1]+1);
      //   dbg(v[i],ans);
    }
    if(v[i]>=v[i-1]){
        ll x = (v[i] - (v[i-1] - 1));
        ans += x;
        v[i] = v[i-1]-1;
        mx = v[i]+1;
    }

   }
   if(ans != 0){
        v[0] = max(v[0]-ans, v[1]+1);
        // dbg(v[i],ans);
    }

    cout<<ans+v[0]<<endl;
}
int main() {
   Limon();
   int _; cin >> _;
   for(int i = 1; i <= _; i++) {
       solve();
   }
   return 0;
}
