#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
void solve(){
    int n,m,k;cin>>n>>m>>k;
    int x,y,p,q,w = 0, b = 0; cin>>x>>y;
    for(int i = 0; i<k; i++){
        cin>>p>>q;
        if((p%2 == 0 && q%2 == 0) || (p%2 != 0 && q%2 != 0))b = 1 ;
        else w = 1;
    }
    if((x%2 == 0 && y%2 == 0) || (x%2 !=0 && y%2 != 0)){
        if(b)cn;
        else cy;
    }
    else{
        if(w)cn;
        else cy;
    }
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