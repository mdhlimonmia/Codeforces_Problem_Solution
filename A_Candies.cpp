#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    lli n;cin>>n;
    lli a=1;
    for (lli i = 1;; i++)
    {
        lli k=pow(2,i);
        a+=k;
        if(n%a == 0)break;
    }
    cout<<n/a<<endl;
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