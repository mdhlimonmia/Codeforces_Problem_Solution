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

<<<<<<< HEAD
ll get_n(dl t, dl k) {
    if(t==0)return 0;
    dbg(t,k);
    ll n = (log(t) / log(k));
    dbg(n);
    return n;
}

ll slf(ll t){
    if (t == 0) {
        return 0;
    } else if ((t & (t - 1)) != 0) {
        return 0;
    } else {
        // Calculate n using bitwise operations
        int n = 0;
        while (t > 1) {
            t >>= 1; // Right shift (divide by 2)
            n++;
        }

        return n;
    }


}

void solve(){
    ll k, l1, r1, l2, r2;cin>>k>>l1>>r1>>l2>>r2;
    ll ans = 0;
    if(k!=2){
            for(ll i = l1; i<=r1; i++){
            dl t1 = (r2*1.0)/i;
            dl t2 = ((l2-1)*1.0)/i;
            ll x = get_n(t1,k) - get_n(t2,k);
            ans+=x;
            dbg(ans, '\n');
        }
    }else{
        for(ll i = l1; i<=r1; i++){
            dl t1 = (r2*1.0)/i;
            dl t2 = ((l2-1)*1.0)/i;
            ll x = slf(t1) - slf(t2);
            ans+=x;
            dbg(ans, '\n');
        }
    }
=======
// ll get_n(dl t, dl k) {
//     if(t==0)return 0;
//     dbg(t,k);
//     ll n = (log(t) / log(k));
//     dbg(n);
//     return n;
// }

// ll slf(ll t){
//     if (t == 0) {
//         return 0;
//     } else if ((t & (t - 1)) != 0) {
//         return 0;
//     } else {
//         // Calculate n using bitwise operations
//         int n = 0;
//         while (t > 1) {
//             t >>= 1; // Right shift (divide by 2)
//             n++;
//         }

//         return n;
//     }


// }

// void solve(){
//     ll k, l1, r1, l2, r2;cin>>k>>l1>>r1>>l2>>r2;
//     ll ans = 0;
//     if(k!=2){
//             for(ll i = l1; i<=r1; i++){
//             dl t1 = (r2*1.0)/i;
//             dl t2 = ((l2-1)*1.0)/i;
//             ll x = get_n(t1,k) - get_n(t2,k);
//             ans+=x;
//             dbg(ans, '\n');
//         }
//     }else{
//         for(ll i = l1; i<=r1; i++){
//             dl t1 = (r2*1.0)/i;
//             dl t2 = ((l2-1)*1.0)/i;
//             ll x = slf(t1) - slf(t2);
//             ans+=x;
//             dbg(ans, '\n');
//         }
//     }
//     cout<<ans<<endl;
// }
void solve(){
    ll k, l1, r1, l2, r2;
    cin>>k>>l1>>r1>>l2>>r2;
    ll x = -1,l = l2, r = r2;
    ll tem1 = (l2/k );
    tem1*=k;
    dbg(tem1);
    ll ans = 0;
    for(int i = tem1; i<=r2; i+=k){
        if(i/k>=l1 && i/k<=r1){
            dbg(i/k, i);
            ans++;
        }
    } 
>>>>>>> 63e708f (22/05/25)
    cout<<ans<<endl;
}

int main()
{
    optimize();

    int _ = 1;
    cin>>_;
    for (int tc = 1; tc<=_; tc++)
    {
        solve();
    }
}