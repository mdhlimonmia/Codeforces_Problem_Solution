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


int main() {
    Limon();
    int n; cin >> n;
    string s[n];
    map<int,int>m;
    lli ans = 0;
    for(int i=0; i<n; i++){
        cin>>s[i];
        lli c = 0b00000000, on = 0b00000001;
        for(auto u:s[i]){
            int k = u - 'a';
            c ^=(on<<k);
            // dbg(k,c);
        }
        ans += m[c];
        for(int i = 0; i<26; i++){
            ans += m[c^(on<<i)];
        }
        m[c]++;
    }
    cout<<ans<<endl;
    return 0;
}