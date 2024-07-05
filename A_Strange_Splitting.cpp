#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define ld long double
#define dbg(args...) do {cerr << #args << ": "; faltu(args); } while(0)
void faltu() { cerr << endl; }
template <typename T, typename ...hello> void faltu(T arg, const hello&... rest) { cerr << arg << ' '; faltu(rest...); }
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl


#define lzero(x) __builtin_clzll(x)


void solve() {
    lli n; cin >> n;
    vector<lli>v(n);
    map<lli,lli>m;
    for(int i= 0; i<n; i++){
        cin>>v[i];
        m[v[i]]++;
    }
    if(m.size() == 1){
        no;
    }else if(m.size() == 2){
        yes;
        int i;
        for(i = 0; i<n; i++){
            if(v[i] == v[i+1]){
                cout<<"R";
            }else break;
        }
        bool k = 0;
        if(i==0){
            i++;
            k = 1;
        }
        for(int k = i; k<n; k++)cout<<"B";
        if(k)cout<<"R";
        cout<<"\n";
    }
    else{
        yes;
        cout<<"R";
        for(int i= 1; i<n; i++)cout<<"B";
        cout<<endl;
    }
}

int main() {
    Limon();
    int _; cin >> _;
    for(int i = 1; i <= _; i++) {
        solve();
    }
    return 0;
}