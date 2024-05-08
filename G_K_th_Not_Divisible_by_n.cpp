#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int


//my first logic by recursion
lli nofDivisor(lli n, lli x){

    // cout<<"Ans : "<<ans<<" T :"<<t<<endl;
    if((n/x) + n%x < x) return n/x + n%x;
    else return n/x + nofDivisor(n/x+n%x, x);
}

void solve(){
    lli n,x; cin>>n>>x;

    //***** My logic ******** but wrong
    // if(x<n){
    //     cout<<x<<endl;
    //     return;
    // }
    // lli ans = nofDivisor(x,n);
    // cout<<(x + ans )<<endl;

    //*****By math*****
    //cout<<x+((x-1)/(n-1))<<endl;

    // ******By binary Search************
    lli l = 1, r = 2e9, m, ans;
    while (l<=r)
    {
        m = (l+r)/2;
        lli div = m - (m/n); //Number of number 1 to m that are not divided by n;

        if(div>=x){
            ans = m;
            r = m - 1;
        }else l = m + 1;
    }
    cout<<ans<<endl;
    

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