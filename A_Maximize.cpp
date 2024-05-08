#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    int x = n-1;
    while (x>0)
    {
        int t = __gcd(x,n);
        if(t != 1){

            // cout<<t<<" "<<x<<endl;
            cout<<x<<endl;
            return;
        }
        x--;
    }
    cout<<n-1<<endl;
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