#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    int x,y,z;cin>>x>>y>>z;
    if(x == y && y == z)cout<<"YES"<<endl<<x<<" "<<y<<" "<<z<<endl;
    else if(x == y && z<x)cout<<"YES"<<endl<<x<<" "<<z<<" "<<z<<endl;
    else if(x == z && y<x)cout<<"YES"<<endl<<y<<" "<<x<<" "<<y<<endl;
    else if(y == z && x<y)cout<<"YES"<<endl<<x<<" "<<x<<" "<<y<<endl;
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