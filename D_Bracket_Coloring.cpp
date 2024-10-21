///   ***   ---   |||    In the name of ALLAH    |||   ---   ***   ///

#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
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
    ll n;cin>>n;
    string s;cin>>s;
    if(n%2){
        cout<<"-1\n"; 
        return;
    }
    int x,y; x=y=0;
    for(auto u:s){
        if(u==')')x++;
        else y++;
    }
    if(x!=y){
        cout<<"-1\n";
        return;
    }
    stack<pair<char,int>>st,st2;
    vector<int>v(n);
    bool f1 = 0, f2 = 0;
    int k = 0;
    for(int i = 0; i<n; i++){
        if(st.empty()){
            st.push({s[i],i});
            continue;
        }
        auto tem = st.top();
        char c = tem.F;
        char j = tem.S;
        if(c=='(' && s[i] == ')'){
            st.pop();
            v[j] = 1;
            v[i] = 1;
            f1 = 1;
            k+=2;
        }else{
            st.push({s[i],i});
        }
    }
    int p;
    if(f1==1)p = 2;
    else p = 1;
    int k2 = 0;
    if(k<n){
        for(int i = 0; i<n; i++){
        if(st2.empty()){
            st2.push({s[i],i});
            continue;
        }
        auto tem = st2.top();
        char c = tem.F;
        char j = tem.S;
        if(c==')' && s[i] == '('){
            st2.pop();
            v[j] = p;
            v[i] = p;
            f2 = 1;
            k2+=2;
        }else{
            st2.push({s[i],i});
        }
    }
    }
    if(k == n || k2 == n){
        cout<<"1\n";
        for(int i = 0; i<n; i++)cout<<"1 ";
        cout<<endl;
        return;
    }
    else{
        vector<int>ans(n);
        while(!st.empty()){
            int i = st.top().S;
            ans[i] = 1;
            st.pop();
        }
        cout<<2<<endl;
        for(auto u:ans){
            cout<<u+1<<" ";
        }
        cout<<endl;
    }
}

int main()
{
    optimize();

    int _;cin>>_;
    for (int tc = 1; tc<=_; tc++)
    {
        solve();
    }
}