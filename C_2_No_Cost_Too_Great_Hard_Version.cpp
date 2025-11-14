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
bitset<mx> isPrime;
vector<int> primes;
vl primeFac[mx+1];
// vl cnt(mx);
void primeGen(int n) {
    //for (int i = 3; i <= n; i += 2) isPrime[i] = 1;

    //int sq = sqrt(n);
    for (int i = 2; i < n; i++) {
        if (isPrime[i] == 0) {
            for (int j = i; j < n; j += i) {
                isPrime[j] = 1;
                primeFac[j].push_back(i);
            }
        }
    }
}
void solve(){
    ll n;cin>>n;
    vll v(n);
    for(ll i = 0; i < n; i++) {
        cin>>v[i].F;
    }
    for(ll i = 0; i < n; i++) {
        cin>>v[i].S;
    }
    sort(all(v), [](pll &x, pll &y){ return x.S<y.S;});
    // for(int i = 0; i<mx; i++)cnt[i] = 0;
    ll ans;
    ans = v[0].S + v[1].S;
    if(v[0].F%2 == 0)ans -=v[0].S;
    if(v[1].F%2 == 0)ans -=v[1].S;

    map<int,int>cnt;
    for(auto u:v){
        for(auto w:primeFac[u.F]){
            cnt[w]++;
            if(cnt[w]>1){
                ans = 0;
            }
        }
    }
    for(auto u:v){
        for(auto w:primeFac[u.F]){
            cnt[w]--;
        }
        for(auto w:primeFac[u.F+1]){
            if(cnt[w]>0){
                ans = min(ans, u.S);
            }
        }
        for(auto w:primeFac[u.F]){
            cnt[w]++;
        }
    }

    for(auto w:primeFac[v[0].F]){
            cnt[w]--;
    }
    for(int i = 1; i<n; i++){
        for(auto w:primeFac[v[i].F]){
            ll k = w - (v[0].F%w);
            ans = min(ans, k*v[0].S);
        }
    }
    cout<<ans<<endl;
    
}

int main()
{
    optimize();
    primeGen(mx);
    int _ = 1;
    cin>>_;
    for (int tc = 1; tc<=_; tc++)
    {
        //cout<<"Case "<<tc<<": ";
        solve();
    }
}