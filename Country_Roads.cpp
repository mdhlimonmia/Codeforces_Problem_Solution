<<<<<<< HEAD
///   ***   ---   |||    In the name of ALLAH    |||   ---   ***   ///

=======
// #include <bits/stdc++.h>
// using namespace std;
// #define endl '\n'
// #define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// #define lli long long int
// int t = 1;
// void solve(){
//     int city,road;cin>>city>>road;
//     vector<int>g[city];
//     int dis[city][road];
//     memset(dis,0, sizeof(dis));

//     //input section
//     int s,d,c;
//     for(int i = 0; i<road; i++){
//         cin>>s>>d>>c;
//         if(dis[s][d] != 0){
//             dis[s][d] = dis[d][s] = min(c, dis[s][d]);
//         }else{
//             g[s].push_back(d);
//             g[d].push_back(s);
//             dis[s][d] = dis[d][s] = c;
//         }
//     }
//     int home; cin>>home;
    
//     // for (int i = 0; i < city; i++)
//     // {   cout<<i<<" : ";
//     //     for(auto u:g[i])cout<<u<<" ";
//     //     cout<<endl;
//     // }
    

//     vector<int>ans(city,-1);

//     queue<int>q;
//     q.push(home);

//     ans[home] = 0;

//     while(!q.empty()){
//         int starting_city = q.front();
//         // cout<<starting_city<<" : "<<g[starting_city].size()<<endl;
//         q.pop();

//         for(int i = 0; i<g[starting_city].size(); i++){
//             int current_city = g[starting_city][i];
//             int max_distance = max(ans[starting_city], dis[starting_city][current_city]);
//             if(ans[current_city] != -1){
//                 ans[current_city] = min(ans[current_city], max_distance);
//             }else{
//                 ans[current_city] = max_distance;
//                 q.push(current_city);
//             }
//         }   
//     }
//     cout<<"Case "<<t<<":"<<endl;
//     for(int i = 0; i<city; i++){
//         if(ans[i] == -1) cout<<"Impossible\n";
//         else cout<<ans[i]<<endl;
//     }

//     t++;
// }

// int main()
// {
//     Limon();

//      int _;cin>>_;
//      while (_--)
//      {
//        solve();
//      }
// }

///   ***   ---   |||    In the name of ALLAH    |||   ---   ***   ///

>>>>>>> 63e708f (22/05/25)
#include<bits/stdc++.h>
using namespace std;

typedef long long ll;
<<<<<<< HEAD
=======
typedef unsigned long long ull;
>>>>>>> 63e708f (22/05/25)
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
<<<<<<< HEAD
=======
#define POPCOUNT __builtin_popcountll /*number of set bit*/
#define RIGHTMOST __builtin_ctzll
#define LEFTMOST(x) (63-__builtin_clzll((x)))
>>>>>>> 63e708f (22/05/25)

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
<<<<<<< HEAD
=======
ll getSetBit(ll x) {return __builtin_popcount(x);};
>>>>>>> 63e708f (22/05/25)

int dx[] = { 0, 0, +1, -1, -1  +1, -1, +1 };
int dy[] = { +1, -1, 0, 0, -1, +1, +1, -1 };

inline void normal(ll &a) { a %= MOD; (a < 0) && (a += MOD); }
inline ll modMul(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a*b)%MOD; }
inline ll modAdd(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); return (a+b)%MOD; }
inline ll modSub(ll a, ll b) { a %= MOD, b %= MOD; normal(a), normal(b); a -= b; normal(a); return a; }
inline ll modPow(ll b, ll p) { ll r = 1; while(p) { if(p&1) r = modMul(r, b); b = modMul(b, b); p >>= 1; } return r; }
inline ll modInverse(ll a) { return modPow(a, MOD-2); }
inline ll modDiv(ll a, ll b) { return modMul(a, modInverse(b)); }

<<<<<<< HEAD
const int mx = 16000+123;
vll adj[mx];
vl dis(mx);
int n,m;
void dijkstra(int s){
    for(int i = 0; i<=n; i++)dis[i] = infLL;
    priority_queue<pll,vll,greater<pll>> pq;
    pq.push({0,s});
    dis[s] = 0;
    while(!pq.empty()){
        int u = pq.top().S;
        ll curD = pq.top().F;
        pq.pop();
        // if(dis[u]<curD)continue;
        for(auto v:adj[u]){
            ll x = max(curD,v.second);
            if(dis[v.F]>x){
                dis[v.F] = x;
                // ans[v.F] = max(dis[v.F],v.S);
                pq.push({x, v.F});
=======
const int mx = 5e2+123;
int n,m;
vll adj[mx];
vl dis(mx);

void dijkstra(int s){
    for(int i = 0; i<=n; i++) dis[i] = infLL;
    priority_queue<pll, vll, greater<pll>> pq;
    dis[s] = 0;
    pq.push({0, s});
    while (!pq.empty()) {
        int u = pq.top().S;
        ll curD = pq.top().F;
        pq.pop();
        if(curD > dis[u]) continue;
        for (auto v: adj[u]) {
            if(dis[v.F] > max(curD, v.S)) {
                dis[v.F] = max(curD , v.S);
                pq.push({max(curD , v.S), v.F});
>>>>>>> 63e708f (22/05/25)
            }
        }
    }
}
<<<<<<< HEAD
void solve(int tc){
    cin>>n>>m;
    int u,v,w;
    for(int i = 0; i<=n; i++)adj[i].clear();
    for(int i = 0; i<m; i++){
        cin>>u>>v>>w;
        adj[u].PB({v,w});
        adj[v].PB({u,w});
    }
    int s; cin>>s;
    dijkstra(s);
    cout<<"Case "<<tc<<":\n";
    for(int i = 0; i<n; i++){
        if(dis[i] == infLL)cout<<"Impossible\n";
        else cout<<dis[i]<<"\n";
=======
void solve(){
    cin>>n>>m;
    ll u, v, w;
    for(int i = 0; i<m; i++){
        cin>>u>>v>>w;
        adj[u].push_back({v, w});
        adj[v].push_back({u, w});
    }
    ll s; cin>>s;
    dijkstra(s);
    for(int i = 0; i<n; i++){
        if(dis[i] == infLL)cout<<"Impossible\n";
        else cout<<dis[i]<<endl;
>>>>>>> 63e708f (22/05/25)
    }
}

int main()
{
    optimize();

<<<<<<< HEAD
    int _;cin>>_;
    for (int tc = 1; tc<=_; tc++)
    {
        solve(tc);
=======
    int _ = 1;
    cin>>_;
    for (int tc = 1; tc<=_; tc++)
    {
        for(int i = 0; i<mx; i++)adj[i].clear();
        cout<<"Case "<<tc<<":\n";
        solve();
>>>>>>> 63e708f (22/05/25)
    }
}