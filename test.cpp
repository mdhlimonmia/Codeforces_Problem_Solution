#include <bits/stdc++.h>
using namespace std;
// #define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

void solve(){
    lli a,b; cin>>a>>b;
    lli sum = 0;
    if(a%b == 0)cout<<0<<endl;
    else if(a%b != 0 && b%2 !=0)cout<<-1<<endl;
    else{
        while (a<b)
        {
            sum += a;
            a =a*2;
            // a %=b;
            // cout<<a<<" ";
        }
        if(a%b == 0)cout<<sum<<endl;
        else{
            a %=b;
            if(a*a == b) cout<<sum+a<<endl;
            else cout<<-1<<endl;
        }
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