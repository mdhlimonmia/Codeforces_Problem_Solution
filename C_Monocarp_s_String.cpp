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
    string s;
    cin>>s;
    // vl a, b;
    ll sum1 = 0, sum2 = 0;
    for(int i = 0; i<n; i++){
        if(s[i] == 'a')sum1++;
        else sum2++;
    }
    // if(s[0] == 'a')a.push_back(k);
    // else b.push_back(k);
    // ll sum1 = accumulate(all(a), 0);
    // ll sum2 = accumulate(all(b), 0);
    // dbg(sum1, sum2);
    
    //dbg(sum1, sum2);
    if(sum1 == sum2)cout<<"0\n";
    else if(sum1 == 0 || sum2 == 0)cout<<"-1\n";
    else if(abs(sum1-sum2) == 1)cout<<"1\n";
    // else if(sum1>sum2){
    //     ll x = sum1-sum2, ans = infLL;
    //     // for(int i = 0; i<n; i++){
    //     //     ll tem = 0, y = x;
    //     //     // dbg(i, x, sum2);
    //     //     for(int j = i; j<n; j++){
    //     //         if(s[j] == 'a')tem++; 
    //     //         else y++;
    //     //         // dbg(tem, y, ans);
    //     //         if(tem == y && y-x<sum2){
    //     //             ans = min(ans, y);
    //     //             break;
    //     //         }
    //     //     }
    //     // }
    //     if(ans == infLL)ans = -1;
    //     cout<<ans<<endl;
    // }else{
    //     ll x = sum2-sum1, ans = infLL;
    //     for(int i = 0; i<n; i++){
    //         ll tem = 0, y = x;
    //         // dbg(i);
    //         for(int j = i; j<n; j++){
    //             if(s[j] == 'b')tem++;
    //             else y++;

    //             if(tem == y && y-x<sum1){
    //                 ans = min(ans, y);
    //                 break;
    //             }
    //             // dbg(tem, y);
    //         }
    //     }
    //     if(ans == infLL)ans = -1;
    //     cout<<ans<<endl;
    // }
    else{
        ll z = abs(sum1-sum2), ans = infLL;
        for(ll i = z; i<n; i++){
            ll x = sum1, y = sum2, t = 0, k = 0;
            for(int j = 0; j<n; j++){
                if(s[j] == 'a')x--;
                else y--;
                t++;
                // dbg(x,y);
                if(t > i){
                    if(s[k] == 'a')x++;
                    else y++;
                    k++;
                    t--;
                }
                if(t==i && x==y && x > 0 && y> 0)ans = min(ans, i);
            }
        } 
        if(ans == infLL)ans = -1;
        cout<<ans<<endl;
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