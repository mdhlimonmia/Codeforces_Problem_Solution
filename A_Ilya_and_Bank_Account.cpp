#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    if(n>=0)cout<<n<<endl;
    else{
        int x,y;
        x = n%10;
        n/=10;
        y = n%10;
        n/=10;
        int z = max(x,y);
        n = n*10 +z;
        cout<<n<<endl;
    }
}

int main()
{
    Limon();

    // int _;cin>>_;
    // while (_--)
    // {
       solve();
    // }
}