// ///   ***   ---   |||    In the name of ALLAH    |||   ---   ***   ///

// #include<bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// typedef unsigned long long ull;
// typedef vector<int> vi;
// typedef vector<ll> vl;
// typedef vector<vi> vvi;
// typedef vector<vl> vvl;
// typedef pair<int,int> pii;
// typedef pair<double, double> pdd;
// typedef pair<ll, ll> pll;
// typedef vector<pii> vii;
// typedef vector<pll> vll;
// typedef double dl;

// #define endl '\n'
// #define PB push_back
// #define F first
// #define S second
// #define all(a) (a).begin(),(a).end()
// #define rall(a) (a).rbegin(),(a).rend()
// #define sz(x) (int)x.size()
// #define yes cout<<"YES"<<endl
// #define no cout<<"NO"<<endl
// #define POPCOUNT __builtin_popcountll /*number of set bit*/
// #define RIGHTMOST __builtin_ctzll
// #define LEFTMOST(x) (63-__builtin_clzll((x)))

// const double PI = acos(-1);
// const double eps = 1e-9;
// const int inf = 2000000000;
// const ll infLL = 9000000000000000000;
// #define MOD 1000000007

// #define mem(a,b) memset(a, b, sizeof(a) )
// #define sqr(a) ((a) * (a))

// #define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// #define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
// #define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
// //
// //debug
// template<typename F,typename S>ostream&operator<<(ostream&os,const pair<F,S>&p){return os<<"("<<p.first<<", "<<p.second<<")";}
// template<typename T>ostream&operator<<(ostream&os,const vector<T>&v){os<<"{";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<*it;}return os<<"}";}
// template<typename T>ostream&operator<<(ostream&os,const set<T>&v){os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<",";os<<*it;}return os<<"]";}
// template<typename T>ostream&operator<<(ostream&os,const multiset<T>&v) {os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<*it;}return os<<"]";}
// template<typename F,typename S>ostream&operator<<(ostream&os,const map<F,S>&v){os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<it->first<<" = "<<it->second;}return os<<"]";}
// #define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
// void faltu(){cerr << endl;}
// template<typename T>void faltu(T a[],int n){for(int i=0;i<n;++i)cerr<<a[i]<<' ';cerr<<endl;}
// template<typename T,typename...hello>void faltu(T arg,const hello&...rest){cerr<<arg<<' ';faltu(rest...);}

// ll gcd ( ll a, ll b ) { return __gcd ( a, b ); }
// ll lcm ( ll a, ll b ) { return a * ( b / gcd ( a, b ) ); }
// ll getSetBit(ll x) {return __builtin_popcount(x);};

// int dx[] = { 0, 0, +1, -1, -1  +1, -1, +1 };
// int dy[] = { +1, -1, 0, 0, -1, +1, +1, -1 };

// inline void normal(ll &a) { a %= MOD; (a < 0) && (a += MOD); }
// inline ll modMul(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a*b)%MOD; }
// inline ll modAdd(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
// inline ll modSub(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }
// inline ll modPow(ll b, ll p) { ll r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
// inline ll modInverse(ll a) { return modPow(a, MOD-2); }
// inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }

// const int mx = 2e5+123;
// bitset<mx> isPrime;
// vector<int> primes;
// vl primeFac[mx+1];
// // vl cnt(mx);
// void primeGen(int n) {
//     //for (int i = 3; i <= n; i += 2) isPrime[i] = 1;

//     //int sq = sqrt(n);
//     for (int i = 2; i < n; i++) {
//         if (isPrime[i] == 0) {
//             for (int j = i; j < n; j += i) {
//                 isPrime[j] = 1;
//                 primeFac[j].push_back(i);
//             }
//         }
//     }
// }
// void solve(){
//     ll n;cin>>n;
//     vl v(n);
//     for(ll i = 0; i < n; i++) {
//         cin>>v[i];
//     }
//     ll x;
//     for(ll i = 0; i < n; i++) {
//         cin>>x;
//     }
//     map<int,int>cnt;
//     // for(int i = 0; i<mx; i++)cnt[i] = 0;
//     for(auto u:v){
//         for(auto w:primeFac[u]){
//             cnt[w]++;
//             if(cnt[w]>1){
//                 cout<<"0\n";
//                 return;
//             }
//         }
//     }
//     for(auto u:v){
//         for(auto w:primeFac[u]){
//             cnt[w]--;
//         }
//         for(auto w:primeFac[u+1]){
//             if(cnt[w]>0){
//                 cout<<"1\n";
//                 return;
//             }
//         }
//         for(auto w:primeFac[u]){
//             cnt[w]++;
//         }
//     }
//     cout<<"2\n";
    
// }

// int main()
// {
//     optimize();
//     primeGen(mx);
//     int _ = 1;
//     cin>>_;
//     for (int tc = 1; tc<=_; tc++)
//     {
//         //cout<<"Case "<<tc<<": ";
//         solve();
//     }
// }




#include <bits/stdc++.h>
#include <chrono> 
 
using namespace std;
using namespace std::chrono; 
 
// #pragma GCC target ("avx2")
// #pragma GCC optimization ("O3")
// #pragma GCC optimization ("unroll-loops")
// #pragma optimization_level 3
// #pragma GCC optimize("Ofast,no-stack-protector,unroll-loops,fast-math,O3")
// #pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,tune=native")
 
#define f0r(a, b) for (long long a = 0; a < b; a++)
#define f1r(a, b, c) for (long long a = b; a < c; a++)
#define f0rd(a, b) for (long long a = b; a >= 0; a--)
#define f1rd(a, b, c) for (long long a = b; a >= c; a--)
#define ms(arr, v) memset(arr, v, sizeof(arr))
#define pb push_back
#define io {ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);}
#define mp make_pair
#define f first
#define s second
#define presum(p, a, n) {p[0] = a[0]; for (int i = 1; i < n; i++) p[i] = a[i] + p[i-1];}
#define all(v) v.begin(), v.end()
#define getunique(v) {sort(all(v)); v.erase(unique(all(v)), v.end());}
#define readgraph(list, edges) for (int i = 0; i < edges; i++) {int a, b; cin >> a >> b; a--; b--; list[a].pb(b); list[b].pb(a);}
#define ai(a, n) for (int ele = 0; ele < n; ele++) cin >> a[ele];
#define ain(a, lb, rb) for (int ele = lb; ele <= rb; ele++) cin >> a[ele];
#define ao(a, n) {for (int ele = 0; ele < n; ele++) { if (ele) cout << " "; cout << a[ele]; } cout << '\n';}
#define aout(a, lb, rb) {for (int ele = lb; ele <= rb; ele++) { if (ele > lb) cout << " "; cout << a[ele]; } cout << '\n';}
typedef long long ll;
typedef double ld;
typedef long double lld;
typedef unsigned long long ull;
typedef pair<int, int> pii;
typedef pair<ll, ll> pll;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<pii> vpi;
typedef vector<pll> vpl;

template<typename A> ostream& operator<<(ostream &cout, vector<A> const &v);
template<typename A, typename B> ostream& operator<<(ostream &cout, pair<A, B> const &p) { return cout << "(" << p.f << ", " << p.s << ")"; }
template<typename A> ostream& operator<<(ostream &cout, vector<A> const &v) {
  cout << "["; for(int i = 0; i < v.size(); i++) {if (i) cout << ", "; cout << v[i];} return cout << "]";
}

// template<typename A, typename B> ll max(A x, B y) {
//   return x > y ? x : y;
// }
// template<typename A, typename B> ll min(A x, B y) {
//   return x < y ? x : y;
// }
 
mt19937 rng(steady_clock::now().time_since_epoch().count());
/* usage - just do rng() */
 
void usaco(string filename) {
  #pragma message("be careful, freopen may be wrong")
	freopen((filename + ".in").c_str(), "r", stdin);
	freopen((filename + ".out").c_str(), "w", stdout);
}
 
const ll mod = 998244353;
 
ll madd(ll a, ll b) {
  return (a + b) % mod;
}
ll msub(ll a, ll b) {
  return (((a - b) % mod) + mod) % mod;
}
ll mmul(ll a, ll b) {
  return ((a % mod) * (b % mod)) % mod;
}
ll mpow(ll base, ll exp) {
  ll res = 1;
  while (exp) {
    if (exp % 2 == 1){
        res = (res * base) % mod;
    }
    exp >>= 1;
    base = (base * base) % mod;
  }
  return res;
}
ll minv(ll base) {
  return mpow(base, mod - 2);
}
ll mdiv(ll a, ll b) {
  return mmul(a, minv(b));
}
ll gcd(ll x, ll y) {
  if (x == 0) return y;
  if (y == 0) return x;
  return gcd(y, x % y);
}

bool isprime(ll n) { 
  if (n <= 1) return false; 
  if (n <= 3) return true; 
  
  if (n % 2 == 0 || n % 3 == 0) return false; 
  
  for (ll i = 5; i * i <= n; i += 6) 
    if (n % i == 0 || n % (i+2) == 0) 
      return false; 
  
  return true; 
} 
 
bool prime[1000005]; 
void sieve(int n) { 
  f0r(i, n + 1) prime[i] = 1;
  for (ll p = 2; p * p <= n; p++) { 
    if (prime[p] == true) { 
      for (ll i = p * p; i <= n; i += p) 
        prime[i] = false; 
    } 
  } 
  prime[1] = prime[0] = 0;
} 

vl primelist;
bool __primes_generated__ = 0;

void genprimes(int n) {
  __primes_generated__ = 1;
  sieve(n + 1);
  f1r(i, 2, n + 1) if (prime[i]) primelist.pb(i);
}

vi factors(ll n) {
  if (!__primes_generated__) {
    cerr << "Call genprimes you dope" << endl;
    exit(1);
  }
  vi facs;

  for (ll i = 0; primelist[i] * primelist[i] <= n && i < primelist.size(); i++) {
    if (n % primelist[i] == 0) {
      while (n % primelist[i] == 0) {
        n /= primelist[i];
        facs.pb(primelist[i]);
      }
    }
  }
  if (n > 1) {
    facs.pb(n);
  }
  sort(all(facs));
  return facs;
}

template <typename num_t> 
struct segtree {
  int n, depth;
  vector<num_t> tree, lazy;

  void init(int s, long long* arr) {
    n = s;
    tree = vector<num_t>(4 * s, 0);
    lazy = vector<num_t>(4 * s, 0);
    init(0, 0, n - 1, arr);
  }

  num_t init(int i, int l, int r, long long* arr) {
    if (l == r) return tree[i] = arr[l];

    int mid = (l + r) / 2;
    num_t a = init(2 * i + 1, l, mid, arr),
          b = init(2 * i + 2, mid + 1, r, arr);
    return tree[i] = a.op(b);
  }

  void update(int l, int r, num_t v) {
	if (l > r) return;
    update(0, 0, n - 1, l, r, v);
  }

  num_t update(int i, int tl, int tr, int ql, int qr, num_t v) {
    eval_lazy(i, tl, tr);
	
	if (tl > tr || tr < ql || qr < tl) return tree[i];
    if (ql <= tl && tr <= qr) {
      lazy[i] = lazy[i].val + v.val;
      eval_lazy(i, tl, tr);
      return tree[i];
    }
    
    if (tl == tr) return tree[i];

    int mid = (tl + tr) / 2;
    num_t a = update(2 * i + 1, tl, mid, ql, qr, v),
          b = update(2 * i + 2, mid + 1, tr, ql, qr, v);
    return tree[i] = a.op(b);
  }

  num_t query(int l, int r) {
	if (l > r) return num_t::null_v;
    return query(0, 0, n-1, l, r);
  }

  num_t query(int i, int tl, int tr, int ql, int qr) {
    eval_lazy(i, tl, tr);
    
    if (ql <= tl && tr <= qr) return tree[i];
    if (tl > tr || tr < ql || qr < tl) return num_t::null_v;

    int mid = (tl + tr) / 2;
    num_t a = query(2 * i + 1, tl, mid, ql, qr),
          b = query(2 * i + 2, mid + 1, tr, ql, qr);
    return a.op(b);
  }

  void eval_lazy(int i, int l, int r) {
    tree[i] = tree[i].lazy_op(lazy[i], (r - l + 1));
    if (l != r) {
      lazy[i * 2 + 1] = lazy[i].val + lazy[i * 2 + 1].val;
      lazy[i * 2 + 2] = lazy[i].val + lazy[i * 2 + 2].val;
    }

    lazy[i] = num_t();
  }
};

struct sum_t {
  long long val;
  static const long long null_v = 0;

  sum_t(): val(0) {}
  sum_t(long long v): val(v) {}

  sum_t op(sum_t& other) {
    return sum_t(val + other.val);
  }
  
  sum_t lazy_op(sum_t v, int size) {
    return sum_t(val + v.val * size);
  }
};

struct max_t {
  long long val;
  static const long long null_v = -9223372036854775807LL;

  max_t(): val(0) {}
  max_t(long long v): val(v) {}

  max_t op(max_t& other) {
    return max_t(max(val, other.val));
  }
  
  max_t lazy_op(max_t v, int size) {
    return max_t(val + v.val);
  }
};

ll n, m, k, q, Q, T, l, r, x, y, z;
ll a[1000005];
ll b[1000005];
ll c[1000005];
string s, t;
ll ans = 0;

ll res[100005];
int last[100005];
ll reach[100005];
int dist[100005];
int mreach[100005];
pair<pii, int> vals[100005];

segtree<sum_t> st;
segtree<max_t> mt;
int id[100005];

int main() {
  io;
  // freopen("case", "r", stdin);
  // freopen("test.txt", "r", stdin);
  // freopen("case", "w", stdout);
  // freopen("file.in", "r", stdin);
 
  // usaco("file");
  
  cin >> n;
  ai(a, n);
  cin >> q;
  f0r(i, q) {
    cin >> vals[i].f.s >> vals[i].f.f;
    --vals[i].f.f;
    --vals[i].f.s;
    vals[i].s = i;
  }

  sort(vals, vals + q);
  f0r(i, q) swap(vals[i].f.f, vals[i].f.s);

  ms(c, 0);
  st.init(n, c);

  int pt = 0;

  f0r(i, 1e5 + 1) last[i] = -1;
  f0r(i, n) {
    if (last[a[i]] != -1) {
      st.update(last[a[i]], last[a[i]], -1);
    }

    last[a[i]] = i;

    st.update(i, i, 1);

    while (pt < q && vals[pt].f.s <= i) {
      res[vals[pt].s] = st.query(vals[pt].f.f, vals[pt].f.s).val;
      ++pt;
    }
  }
  
  f0r(i, 1e5 + 1) last[i] = -1;
  f0r(i, 1e5 + 1) dist[i] = -1;
  f0r(i, 1e5 + 1) mreach[i] = n;
  f0rd(i, n - 1) {
    if (last[a[i]] == -1) {
      reach[i] = n;
      dist[a[i]] = n;
      last[a[i]] = i;
    } else {
      if (i + dist[a[i]] >= n || a[i] == a[i + dist[a[i]]]) {
        reach[i] = mreach[a[i]];
      } else {
        reach[i] = last[a[i]] + dist[a[i]];
        mreach[a[i]] = reach[i];
      }
      dist[a[i]] = last[a[i]] - i;
      last[a[i]] = i;
    }
  }

  f0r(i, n) id[i] = -1;
  f0r(i, n) last[i] = -1;
  
  sort(vals, vals + q);
  reverse(vals, vals + q);

  mt.init(n, c);

  pt = n - 1;
  f0r(i, q) {
    while (pt >= vals[i].f.f) {
      if (id[a[pt]] == -1) {
        id[a[pt]] = reach[pt];
        mt.update(pt, pt, reach[pt]);
      } else {
        mt.update(last[a[pt]], last[a[pt]], -id[a[pt]]);
        id[a[pt]] = reach[pt];
        mt.update(pt, pt, reach[pt]);
      }
      last[a[pt]] = pt;

      --pt;
    }

    int v = mt.query(vals[i].f.f, vals[i].f.s).val;
    if (v <= vals[i].f.s) ++res[vals[i].s];
  }

  f0r(i, q) cout << res[i] << endl;
}