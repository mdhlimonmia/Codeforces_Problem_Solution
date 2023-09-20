#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    int l,r;cin>>l>>r;
    if(r%l == 0)cout<<l<<" "<<r<<endl;
    else if(l*2>r)cout<<-1<<" "<<-1<<endl;
    else{
        cout<<l<<" "<<l*2<<endl;
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