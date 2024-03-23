#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    if(n%2 != 0){
        cout<<"NO\n";
        return;
    }
    cout<<"YES\n";
    int k = n/2;
    for (int i = 1; i <= k; i++)
    {
        cout<<"AAB";
    }
    cout<<endl;
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