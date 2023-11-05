#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int main()
{
    Limon();

    lli x,y,z; cin>>x>>y>>z;
    lli total = sqrt(x*y*z);
    x = total/x;
    y = total/y;
    z = total/z;
    lli ans = (x+y+z)*4;
    cout<<ans<<endl;

}