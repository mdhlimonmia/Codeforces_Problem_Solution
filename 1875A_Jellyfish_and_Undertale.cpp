#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    lli a,b,n;cin>>a>>b>>n;
    lli sum = b;
    lli x;
    for (lli i = 0; i < n; i++)
    {
        cin>>x;
        sum +=min(a-1,x);
    }
    
   cout<<sum<<endl;    
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