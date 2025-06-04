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

const int mx = 1e5+123;

void solve(){
    ll n;cin>>n;
    vector<pair<ll,pll>>v(n);
    for(int i = 0; i<n; i++){
        ll x,y;
        cin>>x>>y;
        v[i] = {x+y, {x,y}};
    }
    if(n == 1){
        cout<<"1\n";
        return;
    }
    sort(all(v));
    ll x1 = infLL, y1 = infLL, x2 = -infLL, y2 = -infLL;
    for(int i = 1; i<n; i++){
        x1 = min(x1, v[i].S.F);
        y1 = min(y1, v[i].S.S);
        x2 = max(x2, v[i].S.F);
        y2 = max(y2, v[i].S.S);
        
    }
    ull ans = (ull)(x2-x1+1)*(y2-y1 +1);
    if(ans<n){
        ans = infLL;
        if(x1-1>0 || x2+1 <= 1e9)ans = min(ans, (ull)(x2-x1+1+1)*(y2-y1+1));
        if(y1-1>0 || y2+1 <= 1e9)ans = min(ans, (ull)(x2-x1+1)*(y2-y1+1+1));
    }
    x1 = infLL, y1 = infLL, x2 = -infLL, y2 = -infLL;
    for(int i = 0; i<n-1; i++){
        x1 = min(x1, v[i].S.F);
        y1 = min(y1, v[i].S.S);
        x2 = max(x2, v[i].S.F);
        y2 = max(y2, v[i].S.S);
        
    }
    ull tem = (ull)(x2-x1+1)*(y2-y1 +1);
    if(tem<n){
        tem = infLL;
        if(x1-1>0 || x2+1 <= 1e9)tem = min(tem, (ull)(x2-x1+1+1)*(y2-y1+1));
        if(y1-1>0 || y2+1 <= 1e9)tem = min(tem, (ull)(x2-x1+1)*(y2-y1+1+1));
    }
    ans = min(ans, tem);
    cout<<ans<<endl;
    dbg(v);
}

void solve2(){
    ll n; cin>>n;
    vector<pll>v(n), prex(n+1), sufx(n+2), prey(n+1), sufy(n+2);
    for(int i = 0; i<n; i++){
        cin>>v[i].F>>v[i].S;
    }
    if(n == 1){
        cout<<"1\n";
        return;
    }
    prex[1] = {v[0].F, v[0].F};
    prey[1] = {v[0].S, v[0].S};
    sufx[n] = {v[n-1].F, v[n-1].F};
    sufy[n] = {v[n-1].S, v[n-1].S};
    for(int i = 2; i<=n; i++){
        prex[i].F =  max(prex[i-1].F, v[i-1].F);
        prex[i].S =  min(prex[i-1].S, v[i-1].F);

        prey[i].F =  max(prey[i-1].F, v[i-1].S);
        prey[i].S =  min(prey[i-1].S, v[i-1].S);
        
    }
    for(int i = n-1; i>0; i--){
        sufx[i].F =  max(sufx[i+1].F, v[i-1].F);
        sufx[i].S =  min(sufx[i+1].S, v[i-1].F);

        sufy[i].F =  max(sufy[i+1].F, v[i-1].S);
        sufy[i].S =  min(sufy[i+1].S, v[i-1].S);
    }
    ull ans = infLL;
    ll x1 = infLL, y1 = infLL, x2 = -infLL, y2 = -infLL;
    x1 = (prex[n-1].S);
    y1 = (prey[n-1].S);

    x2 = (prex[n-1].F);
    y2 = (prey[n-1].F);

   ull tem = (ull)(x2-x1+1)*(y2-y1 +1);
    if(tem<n){
        tem = infLL;
        if(x1-1>0 || x2+1 <= 1e9)tem = min(tem, (ull)(x2-x1+1+1)*(y2-y1+1));
        if(y1-1>0 || y2+1 <= 1e9)tem = min(tem, (ull)(x2-x1+1)*(y2-y1+1+1));
    }


    ans = min(ans,tem);

    x1 = (sufx[2].S);
    y1 = (sufy[2].S);

    x2 = (sufx[2].F);
    y2 = (sufy[2].F);

   tem = (ull)(x2-x1+1)*(y2-y1 +1);
    if(tem<n){
        tem = infLL;
        if(x1-1>0 || x2+1 <= 1e9)tem = min(tem, (ull)(x2-x1+1+1)*(y2-y1+1));
        if(y1-1>0 || y2+1 <= 1e9)tem = min(tem, (ull)(x2-x1+1)*(y2-y1+1+1));
    }

    
    ans = min(ans,tem);
    for(int i = 2; i<n; i++){
        x1 = min(prex[i-1].S, sufx[i+1].S);
        y1 = min(prey[i-1].S, sufy[i+1].S);

        x2 = max(prex[i-1].F, sufx[i+1].F);
        y2 = max(prey[i-1].F, sufy[i+1].F);
        tem = (ull)(x2-x1+1)*(y2-y1 +1);
        if(tem<n){
            tem = infLL;
            if(x1-1>0 || x2+1 <= 1e9)tem = min(tem, (ull)(x2-x1+1+1)*(y2-y1+1));
            if(y1-1>0 || y2+1 <= 1e9)tem = min(tem, (ull)(x2-x1+1)*(y2-y1+1+1));
        }
        ans = min(ans,tem);
    }
    // dbg(prex);
    // dbg(sufx);
    // dbg(prey);
    // dbg(sufy);
    cout<<ans<<endl;
}

int main()
{
    optimize();

    int _ = 1;
    cin>>_;
    for (int tc = 1; tc<=_; tc++)
    {
        //cout<<"Case "<<tc<<": ";
        solve2();
    }
}