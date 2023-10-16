#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
void solve(){
    lli n;cin>>n;
    lli x, sum = 0, one = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        sum += x;
        if(x == 1)one++;
    }
    if(n == 1)cn;
    else if(sum>= one + n)cy;
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