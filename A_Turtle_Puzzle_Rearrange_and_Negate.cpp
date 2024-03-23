#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n,x;cin>>n;
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        sum += abs(x);
    }
    cout<<sum<<endl;
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