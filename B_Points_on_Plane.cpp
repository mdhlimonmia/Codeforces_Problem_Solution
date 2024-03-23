#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    //int n;cin>>n;
    lli n; cin>>n;// 975461057789971042;
    // cout<<n<<endl;
    n--;
    lli ans = 0;
    while(n>0){
        n -= 4;
        ans++;
    }
    cout<<ans<<endl;
}

int main()
{
    Limon();

     int _;cin>>_;
     while (_--)
     {
       solve();
     }
}