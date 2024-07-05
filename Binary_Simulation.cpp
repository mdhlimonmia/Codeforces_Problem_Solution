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
    string s; cin>>s;
    int n = s.size();
    int q; cin>>q;
    while(q--){
        char c; cin>>c;
        // dbg(c);
        if(c=='I'){
            int i,j; cin>>i>>j;
            for(int k = i-1; k<j; k++){
                // dbg(k,s[k]);
                if(s[k] == '0')s[k] = '1';
                else s[k] = '0';
            }
            dbg(i,j,s);
        }else{
            int i; cin>>i;
            cout<<s[i-1]<<endl;
            // dbg(i,s[i]);
        }
    }
}

int main()
{
    Limon();
    int _; cin >> _;
    for(int i = 1; i<=_;i++) {
        cout<<"Case "<<i<<":\n";
        solve();
    }
    return 0;
}