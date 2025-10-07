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

const int mx = 1e6+123;

struct info
{
    int open, close, full;
    info(int _open = 0, int _close=0, int _full=0){
        open = _open;
        close = _close;
        full = _full;
    }
};

info t[mx*4];

info marge(info &l, info &r){
    info ans;
    ans.full = l.full+r.full+ min(l.open, r.close);
    ans.open = l.open + r.open - min(l.open, r.close);
    ans.close = l.close + r.close - min(l.open, r.close);
    return ans;
}
void init(ll id, ll b, ll e, string &s){
    if(b==e){
        // dbg(id, e, s[e-1]);
        t[id].open = (s[e-1] == '(' );
        t[id].close = (s[e-1] == ')' );
        t[id].full = 0;
        return;
    }
    ll mid = (b+e)/2;
    init(id*2, b, mid, s);
    init(id*2+1, mid+1, e, s);
    t[id] = marge(t[id*2], t[id*2+1]);
}

info ask(ll id, ll b, ll e, ll x, ll y){
    if(x>e || y<b)return info();
    if(b>=x && e<=y) return t[id];
    ll mid = (b+e)/2;
    info left = ask(id*2, b, mid, x, y);
    info right = ask(id*2+1, mid+1, e, x, y);
    return marge(left, right);
}

void solve(){
    string s; cin>>s;
    ll n, q; cin>>q;
    n = s.size();
    init(1, 1, n, s);
    // dbg(n, s);
    // for(int i = 0; i<=24; i++){
    //     cout<<i<<" :"<<t[i].open<<" "<<t[i].close<<" "<<t[i].full<<endl;
    // }
    while (q--)
    {
        ll x, y;
        cin>>x>>y;
        info ans = ask(1, 1, n, x, y);
        cout<<ans.full * 2<<endl;
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