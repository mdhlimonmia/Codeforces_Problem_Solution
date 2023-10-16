#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    if(n<7 || n == 9)cout<<"NO\n";
    else if(n%3 ==0) cout<<"YES\n"<<1<<" "<<4<<" "<<n-5<<endl;
    else cout<<"YES\n"<<1<<" "<<2<<" "<<n-3<<endl;
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