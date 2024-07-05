#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define ld long double

void solve(){
    lli n,k; cin >> n >>k;
    vector<lli>v(n);
    for(lli i = 0; i<n; i++)cin>>v[i];
    sort(v.begin(),v.end());
    
    for(auto u:v)cout<<u<<" ";
    cout<<endl;

    lli x = 0,y=n-1;
    while(k--){
        if(v[x]+v[x+1]<v[y]){
            v[x] = 0, v[x+1] = 0;
            x+=2;
        }else{
            v[y] = 0;
            y -=1;
        }
    }
    cout<<x<<"  x y "<<y<<endl;
    lli sum = 0;
    for(int i = x; i<=y; i++){
        cout<<v[i]<<" ";
        sum +=v[i];
    }
    cout<<endl;
    cout<<sum<<endl;
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