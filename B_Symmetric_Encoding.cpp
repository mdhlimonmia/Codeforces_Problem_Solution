#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define ld long double

#define dbg(args...) do {cerr << #args << " : "; faltu(args); } while(0)
void faltu () {            cerr << endl;}
template < typename T, typename ... hello>void faltu( T arg, const hello &... rest) {cerr << arg << ' ';faltu(rest...);}

void solve(){
    int n; cin >> n;
    string s; cin>>s;
    map<char,int>m;
    for(auto u:s)m[u]++;
    int l = m.size();
    string r; r="";
    for(auto u:m)r+=u.first;
    // dbg(r);
    string k = r;
    reverse(k.begin(),k.end());
    map<char,char>t;
    for(int i = 0; i<l; i++){
        t[k[i]] = r[i];
    }
    // dbg(k);
    for(auto u:s){
        cout<<t[u];
    }
    cout<<endl;
}

int main()
{
    Limon();
    int _; cin >> _;
    for(int i = 1; i<=_;i++) {
        solve();
    }
    return 0;
}