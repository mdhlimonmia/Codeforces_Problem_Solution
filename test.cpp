<<<<<<< HEAD
// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string s;
//     cin>>s;
//     int k = s.size();
//     if((s[0] == '-' || s[0] == '+') && k>1)s[0] = '0';
//     bool e = 0, dot = 0, ok = 1;
//     for(int i = 0; i<s.size(); i++){
//         if(isdigit(s[i]) == 0){
//             if((s[i] == 'e' || s[i] == 'E') && e == 0 && i+1<k) e = 1;
//             else if( s[i] == '.' && (e == 0 && dot == 0) && i+1<k)dot = 1;
//             else if((s[i] == '-' || s[i] == '+') && (s[i-1] == 'e' || s[i-1] == 'E') && i+1<k) continue;
//             else{
//                 ok = 0;
//                 break;
//             }
//         }
//     }
//     if(ok)cout<<"Is Digit\n";
//     else cout<<"Not Digit\n";
// }

#include <iostream>
#include <string>
#include <cctype>

bool isValidInteger(const std::string& input) {
    int i = 0, len = input.length();
    if (i < len && (input[i] == '+' || input[i] == '-')) i++;
    bool hasDigits = false;
    while (i < len && std::isdigit(input[i])) { i++; hasDigits = true; }
    if (i < len && (input[i] == 'e' || input[i] == 'E')) {
        i++;
        if (i < len && (input[i] == '+' || input[i] == '-')) i++;
        bool hasExpDigits = false;
        while (i < len && std::isdigit(input[i])) { i++; hasExpDigits = true; }
        if (!hasExpDigits) return false;
    }
    return i == len && hasDigits;
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << (isValidInteger(input) ? "Valid integer format.\n" : "Invalid integer format.\n");
    return 0;
=======
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
bool isBalancedBrackets(string str){
    stack<char>q;
    for(int i = 0; i<str.size(); i++){
        if(str[i] == '(' || str[i] == '{' || str[i] == '[')q.push(str[i]);
        else{
            if(q.empty())return 0;
            else{
                char c = q.top();
                q.pop();
                if((str[i] == ')' && c != '(' ) || (str[i] == '}' && c != '{') || (str[i] == ']' && c != '['))return 0;
            }
        }
    }
    if(q.empty())return 1;
    else return 0;
	
}
int firstUniqueCharacter(string str){
    vector<int>v(26,0);
    for(auto u:str){
        v[u-'a']++;
    }
    char c = '1';
    for(int i = 0; i<26; i++){
        if(v[i] == 1)c = i+'a';
    }
    if(c=='1')return -1;
    for(int i = 0; i<str.size(); i++){
        if(c==str[i])return i+1;
    }
}
void solve(){
    string s; cin>>s;
    cout<<firstUniqueCharacter(s)<<endl;
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
>>>>>>> 63e708f (22/05/25)
}