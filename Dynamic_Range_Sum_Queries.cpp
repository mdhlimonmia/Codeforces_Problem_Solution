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

const int mx = 2e5+123;
ll t[mx*3], a[mx];

// Create Segment Tree
void init(ll id, ll st, ll en) {
    if (st == en) {
        t[id] = a[st];
        return;
    }
    ll mid = (st + en) >> 1;
    init(id*2, st, mid);
    init(id*2+1, mid+1, en);
    t[id] = t[id*2] + t[id*2+1];
}

// Update Value for index i to val
void update(ll id, ll st, ll en, ll i, ll val) {
    if (st > i || en < i) return;
    if (st == en && st == i) {
        t[id] = val;
        return;
    }
    ll mid = (st + en) >> 1;
    update(id*2, st, mid, i, val);
    update(id*2+1, mid+1, en, i, val);
    t[id] = t[id*2] + t[id*2+1];
}

// Query of Segment Tree (sum from i to j inclusive)
ll ask(ll id, ll st, ll en, ll i, ll j) {
    if (i > en || j < st) return 0;
    if (st >= i && en <= j) return t[id];
    ll mid = (st + en) >> 1;
    ll leftSum = ask(id*2, st, mid, i, j);
    ll rightSum = ask(id*2+1, mid+1, en, i, j);
    return leftSum + rightSum;
}
void solve(){
    ll n,q;cin>>n>>q;
    for(int i = 1; i<=n; i++)cin>>a[i];
    init(1, 1, n);
    while (q--)
    {   
        ll x, y, z;
        cin>>x>>y>>z;
        if(x == 1){
            update(1, 1, n, y, z);
        }else cout<<ask(1, 1, n, y, z)<<endl;
    }
    
}

int main()
{
    optimize();

    int _ = 1;
    // cin>>_;
    for (int tc = 1; tc<=_; tc++)
    {
        //cout<<"Case "<<tc<<": ";
        solve();
    }
}