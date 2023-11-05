#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
void solve(){
    int n,a,b,c,d;cin>>n>>a>>b>>c>>d;
    int x1 = abs(a-b), x2 = a+b, y1 = abs(c-d), y2 = c+d;

    if((y1/x1 == n && y1%x1 == 0) || (y1/x2 == n && y1%x2 == 0) || (y2/x1 == n && y2%x1 == 0) || (y2/x2 == n && y2%x2 == 0))cy;
    else cn; 
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