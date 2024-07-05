#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define ld long double

const int mx = 1e5+123;
int arr[mx]; 

void solve(){
    lli n; cin >> n;
    vector<int>v(n+1),ans(n+1);
    for(int i = 1; i<=n; i++)cin>>v[i];
    int x = 1,y = n;
    ans[1] = v[1];
    for(int i = 2; i<n; i++){
        if(v[i-1] == n)
    }
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