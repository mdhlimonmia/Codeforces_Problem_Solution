#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int a,b,c;cin>>a>>b>>c;
    double k = (a+b)/2.0;
    double l = k-min(a,b);
    int ans = ceil(l/c);
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