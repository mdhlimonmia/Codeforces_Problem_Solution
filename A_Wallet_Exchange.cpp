#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int a,b;
    cin>>a>>b;
    lli k = a+b;
    if(k%2!=0)cout<<"Alice\n";
    else cout<<"Bob\n";
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