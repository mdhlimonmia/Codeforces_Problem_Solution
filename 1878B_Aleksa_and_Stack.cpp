#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    lli n;cin>>n;
    lli k = 1;
    for(lli i = 1; i <= n; i++)
    {
        cout<<k<<" ";
        k+=2;
    }
    cout<<endl;
    
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