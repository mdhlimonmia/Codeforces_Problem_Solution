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

void solve() {
   ll n,x,y,z;
   cin >> n;
    vector<ll>v(n);
    cin>>v;
    // sort(v.begin(),v.end());
    map<ll,ll>m;
    ll sum = 0,ans = 0;
    for(auto u:v){
        m[u]++;
        sum+=u;
        auto lk = *m.rbegin();
        if(sum - lk.first == lk.first)ans++;
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