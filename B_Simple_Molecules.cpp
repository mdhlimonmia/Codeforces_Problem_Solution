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
    ll a, b, c;cin>>a>>b>>c;
    // vii v;
    // v.PB({a, 1});
    // v.PB({b, 2});
    // v.PB({c, 3});
    // sort(rall(v));
    ll mn = min({a,b,c});
    if(mn%2!=0)mn--;
    a-=mn, b-=mn, c-= mn;
    mn/=2;
    ll x = mn, y = mn, z = mn;
    ll mn2 = min({a,b,c});
    if(mn2 == a){
        if(a != 0){
            if(b>=c){
                b--;
                a--;
                x++;
            }else{
                c--;
                a--;
                z++;
            }
        }
        if(b != c){
            cout<<"Impossible\n";
            return;
        }
        // b/=2;
        cout<<x<<" "<<y+b<<" "<<z<<endl;
    }else if(mn2 == b){
        if(b != 0){
            if(a>=c){
                a--;
                b--;
                x++;
            }else{
                c--;
                b--;
                y++;
            }
        }
        if(a != c){
            cout<<"Impossible\n";
            return;
        }
        // b/=2;
        cout<<x<<" "<<y<<" "<<z+a<<endl;
    }else{
        if(c != 0){
            if(a>=b){
                a--;
                c--;
                z++;
            }else{
                b--;
                c--;
                y++;
            }
        }
        if(a != b){
            cout<<"Impossible\n";
            return;
        }
        // b/=2;
        cout<<x+a<<" "<<y+b<<" "<<z<<endl;
    }
    
}

void solve2(){
    ll a, b, c;
    cin>>a>>b>>c;
    vii v;
    v.PB({a, 1});
    v.PB({b, 2});
    v.PB({c, 3});
    sort(rall(v));
    ll t = v[1].first+v[2].first;
    ll x = v[0].first;
    // dbg(t, x);
    if(x==t || (t-x>0 && (t-x)%2 == 0)){
        ll k = t-x;
        ll j = k/2;
        // dbg(k, j);
        if(a>b && a>c){
            cout<<b-j<<" "<<j<<" "<<c-j<<endl;
        }else if(b>a && b>c){
            cout<<a-j<<" "<<c-j<<" "<<j<<endl;
        }else{
            cout<<j<<" "<<b-j<<" "<<a-j<<endl;
        }
    }
    else cout<<"Impossible\n";
}

int main()
{
    optimize();

    int _ = 1;
    // cin>>_;
    for (int tc = 1; tc<=_; tc++)
    {
        //cout<<"Case "<<tc<<": ";
        solve2();
    }
}