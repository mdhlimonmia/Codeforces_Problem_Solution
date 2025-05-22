#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    if((n&(n-1)) == 0)cout<<"0\n";
    else{
        int k = 2;
        while(k<n)k<<=1;
        // cout<<k<<endl;
        k>>=1;
        int ans = n-k;
        ans<<=1;
        cout<<ans<<endl;
    }
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