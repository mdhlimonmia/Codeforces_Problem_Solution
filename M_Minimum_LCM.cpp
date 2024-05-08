#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    lli n;cin>>n;
    if(n%2==0)cout<<n/2<<" "<<n/2<<endl;
    else{
        lli k = 1;
        for(int i = 3; i*i<=n; i++){
            if(n%i == 0){
                k = n/i;
                break;
            }
        }
        cout<<k<<" "<<n-k<<endl;
    }
}

int main()
{
    // Limon();

     int _;cin>>_;
     while (_--)
     {
       solve();
     }
}