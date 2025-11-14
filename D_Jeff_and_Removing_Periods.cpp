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

const int mx = 1e5+1;

struct  info
{
    int left, right, len;
    int f;
    set<int>st;
    info(int _left = 0, int _right = 0, int _len = 0, int _f = 0){
        left = _left;
        right = _right;
        len = _len;
        f =  _f;
    }
};
info tree[mx*4];
class SGT{   
    //*** must update the marge section
    info marge(info left, info right){
        // dbg(left.left, left.right, left.len, left.f);
        // dbg(right.left, right.right, right.len, right.f);
        info ans;
        if(left.len<right.len){
            ans.st = right.st;
            for(auto u:left.st){
                ans.st.insert(u);
            }
        }else{
            ans.st = left.st;
            for(auto u:right.st){
                ans.st.insert(u);
            }
        }
        ll k = ans.st.size();
        // dbg(k, left.len, right.len);
        ans.f =left.f;
        ans.f +=right.f;
        if(left.right != right.left){
            // if(k <= left.len + right.len){
            //     ans.f = 1;
            //     // dbg(ans.f);
            // }
            ans.f++;
        }
        ans.len = k;
        ans.left = left.left;
        ans.right = right.right;
        return ans;
    }
    //*** Must update lazy lection
    // void upLazy(ll id, ll b, ll e){
    //     tree[id] += lazy[id];
    //     if(b!=e){
    //         lazy[id*2]+=lazy[id];
    //         lazy[id*2+1]+=lazy[id];
    //     }
    //     lazy[id] = 0;
    // }
    public:
        //***must update this section
        // SGT(ll n){
        //     tree.resize(n*4);// resize segment tree;
        //     lazy.resize(n*4);//resize lazy tree;
        // }
        //build segment tree
        void build(ll id, ll b, ll e, ll arr[]){
            if(b == e){
                tree[id].left = arr[b];
                tree[id].right = arr[b];
                tree[id].len = 1;
                tree[id].st.insert(arr[b]);
                return;
            }
            ll mid = (b+e)>>1, l = id<<1, r = l|1;
            build(l, b, mid, arr);
            build(r, mid+1, e, arr);
            tree[id] = marge(tree[l], tree[r]);
        }
        //quary section
        info ask(ll id, ll b, ll e, ll x, ll y){
            dbg(b, e, tree[id].left, tree[id].right, tree[id].f);
            // if(lazy[id] != 0) upLazy(id, b, e); // *** if have lazy tree otherwise remove it
            if(x>e || y<b)return info(0,0,0,0); //*** Must update return value
            if(b>=x && e<=y){
                return tree[id];
            }
            ll mid = (b+e)>>1, l = id<<1, r = l|1;
            info left = ask(l, b, mid, x, y);
            info right = ask(r, mid+1, e, x, y);
            if(left.left == 0) return right;
            if(right.left == 0) return left;
            return marge(left, right);
        }
};

void solve(){
    ll n;cin>>n;
    // dbg(n);
    ll v[n+1];
    for(int i = 1; i<=n; i++)cin>>v[i];
    // dbg(v);
    SGT st;
    st.build(1, 1, n, v);
    dbg(tree[1].len, tree[1].f);
    ll q; cin>>q;
    while (q--)
    {   ll l, r;
        cin>>l>>r;
        info ans = st.ask(1,1,n,l,r);
        ll len = ans.len;
        if(len < ans.f)len++;
        cout<<len<<endl;
    }    
}

int main()
{
    optimize();
    // cerr<<"Hello\n";
    int _ = 1;
    // cin>>_;
    for (int tc = 1; tc<=_; tc++)
    {
        //cout<<"Case "<<tc<<": ";
        solve();
        // cerr<<"Limon\n";
    }
}