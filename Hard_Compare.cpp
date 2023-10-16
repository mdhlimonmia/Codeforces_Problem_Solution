#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    lli a,b,c,d;cin>>a>>b>>c>>d;
    lli ans = 0;
    if(a == 1 && c>=1)cout<<"NO\n";
    else if(a == c && b >d)cout<<"YES\n";
    else if(a == c && b<=d)cout<<"NO\n";
    else if(a>c && b==d)cout<<"YES\n";
    else if(a<=c && b==d)cout<<"NO\n";
    else if(a>c && b>d)cout<<"YES\n";
    else if(a<=c && b<=d)cout<<"NO\n";
    else if(b>d){
        ans = pow(a,b-d) - c;
        if(ans>0)cout<<"YES\n";
        else cout<<"NO\n";
    }
    else{
        ans = a - pow(c,d-b);
        if(ans>0)cout<<"YES\n";
        else cout<<"NO\n";
    }

}

int main()
{
    Limon();

    // int _;cin>>_;
    // while (_--)
    // {
	   solve();
    // }
    
}