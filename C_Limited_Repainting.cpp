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
ll t[mx*4], a[mx], bx[mx], t2[mx*4];
void init ( int id, int b, int e )
{
    if ( b == e ) {
    t[id] = a[b];
    return;
    }
    int mid = ( b + e ) >> 1;
    init ( id*2, b, mid );
    init ( id*2+1, mid+1, e );
    t[id] = max(t[id*2] , t[id*2+1]);
}

void init2 ( int id, int b, int e )
{
    if ( b == e ) {
    t2[id] = bx[b];
    return;
    }
    int mid = ( b + e ) >> 1;
    init2 ( id*2, b, mid );
    init2 ( id*2+1, mid+1, e );
    t2[id] = max(t2[id*2] , t2[id*2+1]);
}

 
ll ask1 ( int id, int b, int e, int l, int r )
{
    if ( b > r || e < l ) return 0;
    if ( l <= b && e <= r ) {
        return t[id];
    }
    int mid = ( b + e ) >> 1;
    ll sumL = ask1 ( id*2, b, mid, l, r );
    ll sumR = ask1 ( id*2+1, mid+1, e, l, r );
    return max(sumL , sumR);
}

ll ask2 ( int id, int b, int e, int l, int r )
{
    if ( b > r || e < l ) return 0;
    if ( l <= b && e <= r ) {
        return t2[id];
    }
    int mid = ( b + e ) >> 1;
    ll sumL = ask2 ( id*2, b, mid, l, r );
    ll sumR = ask2 ( id*2+1, mid+1, e, l, r );
    return max(sumL, sumR);
}
 

void solve(){
    int n, k;
    cin >> n >> k;
    string s; cin>>s;
    vl v(n+1);
    for ( int i = 1; i <= n; i++ ) cin >> v[i];
    for ( int i = 1; i <= n; i++ ){
        if(s[i-1] == 'B')bx[i] = v[i];
        if(s[i-1] == 'R')a[i] = v[i];
    }
    init ( 1, 1, n );
    init2 ( 1, 1, n);
    vl tem;
    dbg(s);
    for(int i = 0; i<n; i++){
        if(s[i] == 'B'){
            tem.push_back(i+1);
            while(i+1<n && s[i] == s[i+1])i++;
        }
    }
    dbg(tem);

    ll ans = min(ask1(1,1,n,1,n), ask2(1,1,n,1,n));
    dbg(ans);
    vl tem2;
    for(int i = 1; i<tem.size(); i++){
        for(int j = 0; j<i; j++){
            ll x = ask1(1,1,n,tem[j], tem[i]);
            ll y = ask2(1,1,n,tem[j], tem[i]);
            if(x<y){
                tem2.PB(x);
            }
        }
    }
    dbg(tem2);
    sort(all(tem2));
    if(tem2.size()<=k){
        cout<<tem2[0]<<endl;
    }else{
        
    }
    // for(int i = 1; i<tem.size(); i++){

    // }
    // while ( q-- ) {
    //     int typ;
    //     cin >> typ;
 
    //     if ( typ == 1 ) {
    //         int a, b, u;
    //         cin >> a >> b >> u;
    //         upd ( 1, 1, n, a, b, u );
    //     }
    //     else {
    //         int k;
    //         cin >> k;
    //         cout << ask ( 1, 1, n, k ) << endl;
    //     }
    // }
 
 
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
}
 
 
 
 
 
 
 
 
 
 
 