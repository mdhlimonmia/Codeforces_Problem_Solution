#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
void solve(){
    int a,b,c;cin>>a>>b>>c;

    int a1 = b-(c-b);
    if(a1>=a && a1%a ==0 && a1 !=0){
        cy; return;
    }

    int b1 = a+ (c-a)/2;
    if(b1>=b && b1%b==0 && (c-a)%2 ==0 && b1!=0){
        cy; return;
    }

    int c1 = a+(b-a)*2;
    if(c1>=c && c1%c ==0 &&  c1!=0){
        cy; return;
    }
    cn;
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