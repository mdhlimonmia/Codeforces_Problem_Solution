#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define ld long double

void solve(){
    lli x,y,z; cin>>x>>y>>z;
    lli t = (x+y+z);
    if((x+y+z)%2 !=0 )cout<<-1<<endl;
    else if(x==0) cout<<y<<endl;
    else{
        t/=2;
        if(t<=x+y)cout<<t<<endl;
        else cout<<x+y<<endl;
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