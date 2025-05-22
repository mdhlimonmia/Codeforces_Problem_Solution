#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int



bool checkPrime(lli n)
{
    if (n <= 1)
    return false;
    for (lli i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

void solve(){
    lli n;cin>>n;
    int t = 0;
    if(n<3){
        cout<<"6\n";
        return;
    }
    lli x,y;
    while(t<2){
        if((n&1) && checkPrime(n)){
            if(t==0)x=n;
            else y=n;
            t++;
        }
        n++;
    }
    // cout<<x<<" "<<y<<endl;
    unsigned long long ans = x*y;
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