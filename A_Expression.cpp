#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int main()
{
    Limon();

   int x,y,z; cin>>x>>y>>z;
   int ans = max({(x+y+z), (x+y)*z, x*(y+z), x*y*z, x + y*z, x*y+z});
   cout<<ans<<endl;
}