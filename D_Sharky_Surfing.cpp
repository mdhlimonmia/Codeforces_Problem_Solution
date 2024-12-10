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
    ll n,m,l;cin>>n>>m>>l;
    pair<ll,ll>p[n], jm[m];
    ll mx = 0;
    bool f = 0;
    for(int i = 0; i<n; i++){
        cin>>p[i].F>>p[i].S;
        mx = max(mx, (p[i].S - p[i].F)+2);
        if(l >= p[i].F && l<= p[i].S){
            f = 1;
        }
    }

    for(int i = 0; i<m; i++){
        cin>>jm[i].F>>jm[i].S;
    }

    if(f){
        cout<<"-1\n";
        return;
    }

    ll ans = 0, pw = 1, x = 0;
    priority_queue<ll> lt;
    for(int i = 0; i<m; i++){
        if(l<p[x].F){
            cout<<ans<<endl;
            return;
        }
        if(x!=0 && jm[i].F >= p[x-1].F && jm[i].F <= p[x-1].S)continue;
        if(jm[i].F < p[x].F){
            lt.push(jm[i].S);
        }
        else{
            ll t = (p[x].S - p[x].F)+2;
            while(!lt.empty()){
                if(pw>=t)break;
                pw +=lt.top();
                ans++;
                lt.pop();
            }
            if(pw<t){
                cout<<-1<<endl;
                return;
            }
            x++;
            i--;
        }
        if(x==n) break;
    }
    while(!lt.empty()){
        if(pw>=mx){
            break;
        }else{
            ans++;
            pw +=lt.top();
        }
        lt.pop();
    }
    if(pw<mx){
        cout<<"-1\n";
    }
    else cout<<ans<<endl;

}

void solve1(){
    ll n,m,l;cin>>n>>m>>l;
    pair<ll,ll>p[n], jm[m];
    ll mx = 0;
    for(int i = 0; i<n; i++){
        cin>>p[i].F>>p[i].S;
        mx = max(mx, (p[i].S - p[i].F)+2);
    }
 
    for(int i = 0; i<m; i++){
        cin>>jm[i].F>>jm[i].S;
    }
    ll ans = 0, pw = 1, x = 0, y = 0;
    vl tem, lt;
    lt.PB(0);
    for(int i = 0; i<m; i++){
        if(jm[i].F < p[x].F){
            tem.push_back(jm[i].S);
            // pw += jm[i].S;
            y += jm[i].S;
        }
        else{
            ll t = (p[x].S - p[x].F)+2;
            if(pw+y<t){
                cout<<-1<<endl;
                return;
            }else{
                sort(rall(tem));
                for(int k = 0; k<tem.size(); k++){
                    if(pw>=t){
                        lt.push_back(tem[k]);
                    }else{
                        ans++;
                        pw +=tem[k];
                    }
                }
                tem.clear();
                y = 0;
                x++;
                i--;
            }
        }
        if(x==n) break;
    }
    sort(rall(tem));
    for(int k = 0; k<tem.size(); k++){
        if(pw>=mx){
            lt.push_back(tem[k]);
        }else{
            ans++;
            pw +=tem[k];
        }
    }
    if(pw<mx){
        sort(rall(lt));
        for(int i = 0; i<lt.size(); i++){
            pw+=lt[i];
            ans++;
            if(pw>=mx){
                cout<<ans<<endl;
                return;
            }
        }
        cout<<"-1\n";
    }
    else cout<<ans<<endl;
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