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
    ll n, m;cin>>n>>m;
    vl a(n), b(m);
    // for(auto &u:a)cin>>u;
    // for(auto &u:b)cin>>u;
    
    sort(all(a));
    sort(all(b));
    // int j = 0;
    // for(int i = 0; i<n; i++){
    //     if(j<m && a[i]!=b[j]){
    //         if(i<n-1 && a[i]+a[i+1] == b[j] && abs(a[i]-a[i+1])<=1){
    //             i++;
    //             j++;
    //         }else{
    //             no;
    //             return;
    //         }
    //     }else if(j>=m){
    //         no;
    //         return;
    //     }
    // }
    int j = 0;
    vector<int>ans;
    ll tem = 0;
    for(int i = 0; i<n; i++){
        if(j<m && a[i] == b[j]){
            ans.push_back(a[i]);
            j++;
        }else if(j<m && a[i]!= b[i]){
            if(tem == 0 && i<n-1 && abs(a[i]-a[i+1])<=1){
                tem = a[i]+a[i+1];
            }
        }
    }
    yes;
}

void solve1(){
    int n, m; cin>>n>>m;
    map<ll,ll>v1;
    for(ll i= 0; i<n; i++){
        ll x; cin>>x;
        v1[x]++;
    }
    vl a,b;
    for(ll i = 0; i<m; i++){
        ll x; cin>>x;
        if(v1[x]>0)v1[x]--;
        else b.PB(x);
    }
    dbg(v1[1]);
    for(auto u:v1){
        if(u.S>0){
            for(int i = 1; i<=u.S; i++){
                a.PB(u.F);
            }
        }
    }
    dbg(a, b);

    n = a.size(), m = b.size();
    if(n==0 && m==0){
        yes;
        return;
    }
    if(n == 0 || m == 0){
        no;
        return;
    }
    vl ans, sum(n+1);
    for(int i = 0; i<n; i++){
        sum[i+1] += sum[i] + a[i];
    }
    dbg(sum);
    int j = 0;
    for(int i = 0; i<n; i++){
        if(j<m && a[i] == b[j]){
            ans.PB(a[i]);
            j++;
        }else if(j<m){
            int k = upper_bound(sum.begin()+i, sum.end(), b[j]+sum[i]) - sum.begin();
            if(sum[k-1] - sum[i] == b[j]){
                dbg(i, j, b[j], k, sum[k-1], sum[i]);
                k-=2;
                ll x = a[i], y = a[k];
                ll i1 = i, k1 = k;
                i++,k--;
                while(i<=k){
                    dbg(i, k, a[i], a[k]);
                    if(i<=k && abs(x - a[i])<=1){
                        dbg(x, a[i]);
                        x+=a[i];
                        i++;
                    }
                    if(k>i && abs(y-a[k])<=1){
                        y+=a[k];
                        k--;
                    }
                }
                dbg(x, y);
                if((abs(x-y)<=1 && x+y == b[j]) || (abs(y-a[i-1])<=1 && abs((x-a[i-1]) - (y+a[i-1]))<=1 && x+y == b[j])){
                    ans.push_back(x+y);
                    j++;
                    i = k-1;
                }
                else{
                    no;
                    return;
                }
            }
        }
    }
    dbg(ans);
    n = ans.size(), m = b.size();
    if(n==m){
        for(int i = 0; i<m; i++){
            if(b[i] != ans[i]){
                no;
                return;
            }
        }
    }else{
        no;
        return;
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
        solve1();
    }
}