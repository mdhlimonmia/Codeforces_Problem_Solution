#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    int n;cin>>n;
    int x, a=0, b=0;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        if(x%2 == 0) a += x;
        else b += x;
    }
    if(a>b)cout<<"YES"<<endl;
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