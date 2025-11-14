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
bool vis[100][100];

int check(vector<string>s, ll i, ll j, ll n, ll x = 1){
    ll row = 1, col = 1;
    if(i+1<n && s[i+1][j] == '#')row++;
    if(i+2<n && s[i+1][j] == '#' && s[i+2][j] == '#')row++;

    if(i-1>=0 && s[i-1][j] == '#')row++;
    if(i-2>=0 && s[i-1][j] == '#' && s[i-2][j] == '#')row++;

    if(j-1>=0 && s[i][j-1] == '#')col++;
    if(j-2>=0 && s[i][j-1] == '#' && s[i][j-2] == '#')col++;

    if(j+1<n && s[i][j+1] == '#')col++;
    if(j+2<n && s[i][j+1] == '#' && s[i][j+2] == '#')col++;
    // dbg(i, j, row, col);
    return max(row , col);
}

bool dfs(vector<string>&s, ll i, ll j, ll n){
    dbg(i, j, s[i][j]);
    if(s[i][j] == '#' && vis[i][j] == 0) return 1;
    vis[i][j] = 1;
    bool f = 0;
    char c = s[i][j] = '#';
    s[i][j] = '#';
    if(i+1<n && vis[i+1][j] == 0 && s[i+1][j] == '#'){
        if(check(s, i+1, j, n, 1)<3) return 1;
        else{
            s[i][j] = c;
            return 0;
        }
    }
    if(i+1<n && vis[i+1][j] == 0 && check(s, i+1, j, n,1)<3){
        f |= dfs(s, i+1, j, n);
    }

    if(i-1>=0 && vis[i-1][j] == 0 && s[i-1][j] == '#'){
        if(check(s, i-1, j, n, 1)<3) return 1;
        else{
            s[i][j] = c;
            return 0;
        }
    }
    if(i-1>=0 && vis[i-1][j] == 0 && check(s, i-1, j, n)<3){
        f |= dfs(s, i-1, j, n);
    }

    if(j+1<n && vis[i][j+1] == 0 && s[i][j+1] == '#'){
        if( check(s, i, j+1, n, 1)<3) return 1;
       else{
            s[i][j] = c;
            return 0;
        }
    }
    if(j+1<n && vis[i][j+1] == 0 && check(s, i, j+1, n,1)<3){
        f |= dfs(s, i, j+1, n);
    }

    if(j-1>=0 && vis[i][j-1] == 0 && s[i][j-1] == '#'){
        if( check(s, i, j-1, n, 1)<3) return 1;
       else{
            s[i][j] = c;
            return 0;
        }
    }
    if(j-1>=0 && vis[i][j-1] == 0 && check(s, i, j-1, n)<3){
        f |= dfs(s, i, j-1, n);
    }
    dbg(i, j, f);
    if(f)s[i][j] = '#';
    else s[i][j] = c;
    return f;
}

bool dfsL(vector<string>&s, ll i, ll j, ll n){
    if(s[i][j] == '#' && vis[i][j] == 0) return 1;
    vis[i][j] = 1;
    bool f = 0;
    // if(i+1<n && vis[i+1][j] == 0 && check(s, i+1, j, n)<3){
    //     f |= dfsL(s, i+1, j, n);
    // }
    char c = s[i][j] = '#';
    s[i][j] = '#';
    if(i-1>=0 && vis[i-1][j] == 0 && s[i-1][j] == '#'){
        if( check(s, i-1, j, n, 1)<3) return 1;
        else{
            s[i][j] = c;
            return 0;
        }
    }

    if(i-1>=0 && vis[i-1][j] == 0 && check(s, i-1, j, n,1)<3){
        f |= dfsL(s, i-1, j, n);
    }

    if(j+1<n && vis[i][j+j] == 0 && s[i][j+1] == '#'){
        if( check(s, i, j+1, n, 1)<3) return 1;
        else{
            s[i][j] = c;
            return 0;
        }
    }

    if(j+1<n && vis[i][j+1] == 0 && check(s, i, j+1, n, 1)<3){
        f |= dfsL(s, i, j+1, n);
    }
    // if(j-1>=0 && vis[i][j-1] == 0 && check(s, i, j-1, n)<3){
    //     f |= dfsL(s, i, j-1, n);
    // }
    dbg(i, j, f);
    if(f)s[i][j] = '#';
    else s[i][j] = c;
    return f;
}

void prt(vector<string>s, ll n, ll i, ll j){
    dbg(i, j);
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
           cout<<s[i][j];
        }
        cout<<endl;
    }
    cout<<endl;
}

void set0(ll n){
    for(int i = 0; i<=n; i++){
        for(int j = 0; j<=n; j++)vis[i][j] = 0;
    }
}

void solve(){
    ll n;cin>>n;
    vector<string>s(n);
    for(int i = 0; i<n; i++)cin>>s[i];
    ll hs = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(s[i][j] == '#'){
                hs++;
                if(check(s, i, j, n, 1)>2){
                    no;
                    return;
                }
            }
        }
    }
    if(hs <=1){
        yes;
        return;
    }
    //cout<<"wait\n";
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(s[i][j] == '#'){
                // if(check(s, i, j, n)>1)continue;
                set0(n);
                vis[i][j] = 1;
                bool f = dfs(s, i, j, n);
                prt(s, n, i, j);
                // if(!f) {
                //     vis[i][j] = 1;
                //     set0(n);
                //     dfsL(s, i, j, n);
                //     prt(s, n, i, j);
                // }
            }
        }
    }
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            if(s[i][j] == '#'){
                hs++;
                ll tt = check(s, i, j, n, 1);
                if(tt==1){
                    no;
                    return;
                }
            }
        }
    }
    yes;
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