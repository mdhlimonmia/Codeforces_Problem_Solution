#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int a,b,c;cin>>a>>b>>c;
    int k,x,y;
    if(a<b){
        k = b - a;
        y = k*2;
        // cout<<k<<" "<<y<<endl;
    }else{
        k = a - b;
        y = k*2;
        // cout<<k<<" "<<y<<endl;
    }
    if(c>y || max(a,b) >y ) cout<<-1<<endl;
    else if(c <= y/2) cout<<c+k<<endl;
    else cout<<c-k<<endl;

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