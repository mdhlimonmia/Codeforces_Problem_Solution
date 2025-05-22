#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    lli n;cin>>n;
    lli ans = 0 , l = sqrt(n);
    for(lli j = 1; j<l; j++){
        if(n%j == 0) ans += j + (n/j);
    }
    if(n%l == 0){
        if(n/l == l) ans += l;
        else ans += l + (n/l);
    }
    cout<<ans - n<<endl;
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