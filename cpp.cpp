////   ***   ---   |||    In the name of ALLAH    |||   ---   ***   ///

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
typedef unsigned long long ull;
typedef vector<int> vi;
typedef vector<ll> vl;
typedef vector<vi> vvi;
typedef vector<vl> vvl;
typedef pair<int,int> pii;
typedef pair<double, double> pdd;
typedef pair<ll, ll> pll;
typedef vector<pii> vii;
typedef vector<pll> vll;
typedef double dl;

#define endl '\n'
#define PB push_back
#define F first
#define S second
#define all(a) (a).begin(),(a).end()
#define rall(a) (a).rbegin(),(a).rend()
#define sz(x) (int)x.size()
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl

const double PI = acos(-1);
const double eps = 1e-9;
const int inf = 2000000000;
const ll infLL = 9000000000000000000;
#define MOD 1000000007

#define mem(a,b) memset(a, b, sizeof(a) )
#define sqr(a) ((a) * (a))

#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define fraction() cout.unsetf(ios::floatfield); cout.precision(10); cout.setf(ios::fixed,ios::floatfield);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
//
//debug
template<typename F,typename S>ostream&operator<<(ostream&os,const pair<F,S>&p){return os<<"("<<p.first<<", "<<p.second<<")";}
template<typename T>ostream&operator<<(ostream&os,const vector<T>&v){os<<"{";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<*it;}return os<<"}";}
template<typename T>ostream&operator<<(ostream&os,const set<T>&v){os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<",";os<<*it;}return os<<"]";}
template<typename T>ostream&operator<<(ostream&os,const multiset<T>&v) {os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<*it;}return os<<"]";}
template<typename F,typename S>ostream&operator<<(ostream&os,const map<F,S>&v){os<<"[";for(auto it=v.begin();it!=v.end();++it){if(it!=v.begin())os<<", ";os<<it->first<<" = "<<it->second;}return os<<"]";}
#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu(){cerr << endl;}
template<typename T>void faltu(T a[],int n){for(int i=0;i<n;++i)cerr<<a[i]<<' ';cerr<<endl;}
template<typename T,typename...hello>void faltu(T arg,const hello&...rest){cerr<<arg<<' ';faltu(rest...);}

ll gcd ( ll a, ll b ) { return __gcd ( a, b ); }
ll lcm ( ll a, ll b ) { return a * ( b / gcd ( a, b ) ); }

int dx[] = { 0, 0, +1, -1, -1  +1, -1, +1 };
int dy[] = { +1, -1, 0, 0, -1, +1, +1, -1 };

inline void normal(ll &a) { a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a*b)%MOD; }
inline ll modAdd(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
inline ll modSub(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }
inline ll modPow(ll b, ll p) { ll r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
inline ll modInverse(ll a) { return modPow(a, MOD-2); }
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }

const int mx = 1e5+123;

void solve(){
    ll n;cin>>n;
}

int main()
{
    optimize();

    int _ = 1;
    cin>>_;
    for (int tc = 1; tc<=_; tc++)
    {
        solve();
    }
}

////////////////////////
bitset<mx> isPrime;
vector<int> primes;

void primeGen(int n) {
    for (int i = 3; i <= n; i += 2) isPrime[i] = 1;

    int sq = sqrt(n);
    for (int i = 3; i <= sq; i += 2) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = 0;
            }
        }
    }

    primes.push_back(2);
    for (int i = 3; i <= n; i += 2) {
        if (isPrime[i] == 1) {
            primes.push_back(i);
        }
    }
}

////////////////
bool isPrime(ll n) {
    if (n <= 1)
        return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}
/////////////////////
const int mx = 1e5+123;
int n,m;
vii adj[mx];
vl dis(mx);

void dijkstra(int s){
    for(int i = 0; i<=n; i++) dis[i] = infLL;
    priority_queue<pll, vll, greater<pll>> pq;
    dis[s] = 0;
    pq.push({0, s});
    while (!pq.empty()) {
        int u = pq.top().S;
        ll curD = pq.top().F;
        pq.pop();
        if(curD > dis[u]) continue;
        for (auto v: adj[u]) {
            if(dis[v.F] > curD + v.S) {
                dis[v.F] = curD + v.S;
                pq.push({curD + v.S, v.F});
            }
        }
    }
}

/////////////
ll numberOfDivisors(ll n) {
    ll ans = 1;
    for (auto u : primes) {
        if (1ll * u * u > n) break;
        if (n % u == 0) {
            ll a = 0;
            while (n % u == 0) {
                a++;
                n /= u;
            }
            ans *= (a + 1);
        }
    }
    if (n != 1) {
        ans *= 2;
    }
    return ans;
}
///////////////////
ll sum_of_Digit(ll x) {
    ll sum = 0;
    while (x) {
        sum += (x % 10);
        x /= 10;
    }
    return sum;
}
///////////////////
ll Euler_Phi(ll n) {
    ll phi = n;
    for (auto u : primes) {
        if (1ll * u * u > n) break;
        if (n % u == 0) {
            while (n % u == 0) {
                n /= u;
            }
            phi /= u;
            phi *= (u-1);
        }
    }
    if (n != 1) {
        phi /= n;
        phi *= (n-1);
    }
    return phi;
}
/////////////////
ll bigMod(ll base, ll pow, ll mod) {
    if (pow == 0) return 1 % mod;
    if (pow % 2 == 0) {
        ll tem = bigMod(base, pow / 2, mod);
        return (tem * tem) % mod;
    } else {
        return (base * bigMod(base, pow - 1, mod)) % mod;
    }
}
/////////////////
ll SOD(ll n) {
    ll ans = 1;
    for (auto u : primes) {
        if (1ll * u * u > n) break;
        if (n % u == 0) {
            ll fa = 1, sum = 1;
            while (n % u == 0) {
                fa *= u;
                sum += fa;
                n /= u;
            }
            ans *= sum;
        }
    }
    if (n != 1) {
        ans *= (n + 1);
    }
    return ans;
}
////////////////
void dfs_string(int i, int j) {
    vis[i][j] = 1;
    for (int k = 0; k < 4; k++) {
        int x = i + dx[k];
        int y = j + dy[k];
        if (x >= 0 && y >= 0 && x < n && y < m && vis[x][y] == 0 && adj[x][y] == '1') {
            dfs_string(x, y);
        }
    }
}