#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"

int main()
{
    Limon();

    int n;cin>>n;
    int x,y,z,a=0,b=0,c=0;
    for (int i = 0; i < n; i++)
    {
        cin>>x>>y>>z;
        a+=x;
        b+=y;
        c+=z;
    }
    if(a == 0 && b==0 && c==0)cy;
    else cn;
}