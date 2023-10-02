#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

lli win(int a, int b, int k){
    
    return max(0,max(a,b)+1 - k);
}

void solve(){
    lli a,b,c;cin>>a>>b>>c;
   
     cout<<win(b,c,a)<<" "<<win(a,c,b)<<" "<<win(b,a,c)<<endl;

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