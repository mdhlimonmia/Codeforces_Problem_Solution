#include <bits/stdc++.h>
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
#define ll long long

void solve(){
    ll n,k;
    cin>>n>>k;
    if(k==1){
        cout<<n<<endl;
        return;
    }
    ll ans = 0;
    while (n > 0) {
        ans += n % k;  
        n /= k;  
    }
    cout<<ans<<endl;
    
}
int main() {
    Limon();
    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}