#include <bits/stdc++.h>
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
#define ll long long

void solve(){
    int N, K;
    cin>>N>>K;
    ll ans = 0;
    auto f = [&](int a, int b){
        int k = K-2;
        while(k--){
            int c = b - a;
            if(c<0||a<c)return false;
            b = a;
            a = c;
        }
        return true;
    };
    for(int i=(N+1)/2;i<=N;i++){
        if(f(i, N))ans++;
    }
    cout<<ans<<'\n';
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