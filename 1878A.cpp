#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n,k;cin>>n>>k;
    int x, t = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        if(x == k)t=1;
    }
    if(t)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    
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