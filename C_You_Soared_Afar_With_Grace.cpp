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
    vi a(n), b(n), c, d;
    for(auto &u:a)cin>>u;
    for(auto &u:b)cin>>u;
    vi ind(n+1), ind1(n+1);
    c = a, d = b;
    for(int i = 0; i<n; i++){
        ind[a[i]] = i;
    }
    vii ans;
    for(int i = 0, j = n-1; i<n; i++, j--){
        if(a[i] != b[j]){
            int k = ind[b[j]];
            // if(k<j && k>i){
                ans.push_back({i+1, k+1});
                ind[b[j]] = i;
                ind[a[i]] = k;
                swap(a[i], a[k]);
                swap(b[i], b[k]);
            // }
        }
    }
    //dbg(a);
    //dbg(b);
    for(int i = 0, j = n-1; i<n; i++, j--){
        if(a[i]!= b[j]){
            ans.clear();
            goto sec;
        }
    }
    cout<<ans.size()<<endl;
    for(auto [u,v]:ans){
        cout<<u<<" "<<v<<endl;
    }
    return;

    sec:
    a = c, b = d;
    for(int i = 0; i<n; i++){
        ind[c[i]] = i;
    }
    for(int i = 0, j = n-1; i<n; j--, i++){
        if(c[j] != d[i]){
            int k = ind[d[i]];
            // if(k<j && k>i){
                ans.push_back({j+1, k+1});
                ind[d[i]] = j;
                ind[c[j]] = k;
                swap(d[j], d[k]);
                swap(c[j], c[k]);
            // }
        }
    }
    for(int i = 0, j = n-1; i<n; i++, j--){
        if(c[i]!= d[j]){
            ans.clear();
            goto thr;
        }
    }
    cout<<ans.size()<<endl;
    for(auto [u,v]:ans){
        cout<<u<<" "<<v<<endl;
    }
    return;

    thr:
    c = a, d = b;
    for(int i = 0; i<n; i++){
        ind[b[i]] = i;
    }
    for(int i = 0, j = n-1; i<n; i++, j--){
        if(a[i] != b[j]){
            int k = ind[a[i]];
            // if(k<j && k>i){
                ans.push_back({j+1, k+1});
                ind[a[i]] = j;
                ind[b[j]] = k;
                swap(a[j], a[k]);
                swap(b[j], b[k]);
            // }
        }
    }
    for(int i = 0, j = n-1; i<n; i++, j--){
        if(a[i]!= b[j]){
            // cout<<-1<<endl;
            // return;
            ans.clear();
            goto fot;
        }
    }
    cout<<ans.size()<<endl;
    for(auto [u,v]:ans){
        cout<<u<<" "<<v<<endl;
    }
    return;

    fot:
    for(int i = 0; i<n; i++){
        ind[d[i]] = i;
    }
    for(int i = 0, j= n-1; i<n; i++, j--){
        if(c[j]!=d[i]){
            int k = ind[c[j]];
            ans.push_back({i+1, k+1});
            ind[c[j]] = i;
            ind[d[i]] = k;
            swap(c[j], c[k]);
            swap(c[j], c[k]);
        }
    }
    for(int i = 0, j = n-1; i<n; i++, j--){
        if(c[i]!=d[j]){
            cout<<-1<<endl;
            return;
           
        }
    }
    cout<<ans.size()<<endl;
    for(auto [u,v]:ans){
        cout<<u<<" "<<v<<endl;
    }

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