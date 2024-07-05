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
    int n; cin>>n;
    int sum = 0, x;
    for(int i = 0; i<n; i++){
        cin>>x;
        sum +=x;
    }
    int ans = 0;
    n++;
    for(int i = 1; i<=5; i++){
        if((sum+i)%n != 1)ans++;
    }
    cout<<ans<<endl;
}
