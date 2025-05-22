///   ***   ---   |||    In the name of ALLAH    |||   ---   ***   ///

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
#define POPCOUNT __builtin_popcountll /*number of set bit*/
#define RIGHTMOST __builtin_ctzll
#define LEFTMOST(x) (63-__builtin_clzll((x)))

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
ll getSetBit(ll x) {return __builtin_popcount(x);};

int dx[] = { 0, 0, +1, -1, -1  +1, -1, +1 };
int dy[] = { +1, -1, 0, 0, -1, +1, +1, -1 };

inline void normal(ll &a) { a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a*b)%MOD; }
inline ll modAdd(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
inline ll modSub(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }
inline ll modPow(ll b, ll p) { ll r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
inline ll modInverse(ll a) { return modPow(a, MOD-2); }
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }

<<<<<<< HEAD
const int mod = 1e9+7;
ll bigMod(ll base, ll pow, ll mod) {
    if (pow == 0) return 1 % mod;
    if (pow % 2 == 0) {
        ll tem = bigMod(base, pow / 2, mod);
        return (tem * tem) % mod;
    } else {
        return (base * bigMod(base, pow - 1, mod)) % mod;
    }
}

void solve(){
    // ll n;cin>>n;
    ll u, v;
    cin>>u>>v;
    ll ans = bigMod(2, u-1, mod);
    ans = (ans*v)%mod;
    cout<<ans<<endl;
=======
const int mx = 1e5+123;

void solve(){
    ll n;cin>>n;
>>>>>>> 63e708f (22/05/25)
}

int main()
{
    optimize();

    int _ = 1;
    cin>>_;
    for (int tc = 1; tc<=_; tc++)
    {
        //cout<<"Case "<<tc<<": ";
        solve();
    }
<<<<<<< HEAD
=======
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
////////////////
const int mx = 5000123;
vi phi(mx);
vector<ull> sumPhi(mx);
void Euler_Phi_Sive() {
    for (int i = 1; i < mx; i++) phi[i] = i;
    for (int i = 2; i < mx; i++) {
        if (phi[i] == i) {
            for (int j = i; j < mx; j += i) {
                phi[j] -= phi[j] / i;
            }
        }
    }
}

/////////////////
void genLPSArray(vi &lps, string &s, int m){
    int len = 0, i = 1;
    while(i < m){
        if(s[i] == s[len]){
            len++;
            lps[i] = len;
            i++;
        }else{
            if(len != 0){
                len = lps[len-1];
            }else{
                lps[i] = 0;
                i++;
            }
        }
    }
}

ll KMPSearch(string &a, ll n, string &b, ll m){
    vi lps(m, 0);
    genLPSArray(lps, b, m);
    ll i = 0, j = 0, total = 0;
    while(i < n){
        if(a[i] == b[j]){
            i++, j++;
        }
        if(j == m){
            total++;
            j = lps[j-1];
        }else if(i < n && a[i] != b[j]){
            if(j != 0){
                j = lps[j-1];
            }else{
                i++;
            }
        }
    }
    return total;
}


//////////////
struct info {
    ll u, v, w;
};
vector<info> e;
ll dis[mx];

bool bellmanFord(ll s, ll n, ll m) {
    for (int i = 0; i <= n; i++) dis[i] = inf;
    dis[s] = 0;
    bool isCycle = false;
    for (int i = 1; i <= n; i++) {
        isCycle = false;
        for (int j = 0; j < m; j++) {
            ll u = e[j].u, v = e[j].v, w = e[j].w;
            //if(dis[u]<inf){
               if (dis[u]<inf && dis[u] + w < dis[v]) {
                   dis[v] = max(-infLL, dis[u] + w);
                   isCycle = true;
               }
           //}
        }
    }
    return isCycle;
}

void solve() {
    ll n, m;
    cin >> n >> m;
    e.clear();
    ll u, v, w;
    for (int i = 0; i < m; i++) {
        cin >> u >> v >> w;
        e.push_back({u, v, w});
    }
    if (bellmanFord(0, n, m))
        cout << "There is a Negative Cycle\n";
    else
        cout << "No Negative Cycle\n";
}

////////////////////////
const int mx = 1e3+123;
ll adj[mx][mx];

// Find shortest path in all pairs
void floydWarshall(int n) {
    for (int k = 1; k <= n; k++) {
        for (int i = 1; i <= n; i++) {
            for (int j = 1; j <= n; j++) {
                if (adj[i][k] + adj[k][j] < adj[i][j]) {
                    adj[i][j] = adj[i][k] + adj[k][j];
                }
            }
        }
    }
}

void solve() {
    ll n, m;
    cin >> n >> m;
    for (int i = 0; i <= n; i++) {
        for (int j = 0; j <= n; j++) {
            if (i != j) adj[i][j] = infLL;
        }
    }

    for (int i = 1; i <= m; i++) {
        ll u, v, w;
        cin >> u >> v >> w;
        adj[u][v] = min(adj[u][v], w);
        //adj[v][u] = min(adj[v][u], w); // Bidirectional
    }
    floydWarshall(n);

    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= n; j++) {
            if (adj[i][j] != infLL) cout << adj[i][j] << " ";
            else cout << "inf ";
        }
        cout << endl;
    }
}

////////////////Segment tree

const int mx = 2e5+123;
ll t[mx*4], a[mx];
 
void init ( int id, int b, int e )
{
    if ( b == e ) {
        t[id] = a[b];
        return;
    }
 
    int mid = ( b + e ) >> 1;
    init ( id*2, b, mid );
    init ( id*2+1, mid+1, e );
 
    t[id] = t[id*2] + t[id*2+1];
}
 
void upd ( int id, int b, int e, int i, int val )
{
    if ( b > i || e < i ) return;
    if ( b == e && b == i ) {
        t[id] = val;
        return;
    }
 
    int mid = ( b + e ) >> 1;
    upd ( id*2, b, mid, i, val );
    upd ( id*2+1, mid+1, e, i, val );
 
    t[id] = t[id*2] + t[id*2+1];
}
 
ll ask ( int id, int b, int e, int l, int r )
{
    if ( b > r || e < l ) return 0;
    if ( l <= b && e <= r ) {
        return t[id];
    }
 
    int mid = ( b + e ) >> 1;
    ll sumL = ask ( id*2, b, mid, l, r );
    ll sumR = ask ( id*2+1, mid+1, e, l, r );
 
    return sumL + sumR;
}
////////////
/*to get number of different sets - count 1 in siz or siz.size()
//clear parent and siz after DSU is used
*/

//Disjoint Set Union
ll parent[mxN]; //map<ll,ll> parent;
ll siz[mxN];    //map<ll,ll> siz;
void make_set(ll v) {
    parent[v]=v; siz[v]=1;
}
ll find_set(ll v) {
    return (v==parent[v])?v:parent[v]=find_set(parent[v]);
}
void union_sets(ll a, ll b) {
    a = find_set(a);
    b = find_set(b);
    if (a == b) return;
    if(siz[a]<siz[b]) swap(a,b);
    parent[b] = a;
    siz[a]+=siz[b]; 
    siz[b]=0; //siz.erase(b);
}
ll get_size(ll v){
    return siz[find_set(v)];
>>>>>>> 63e708f (22/05/25)
}