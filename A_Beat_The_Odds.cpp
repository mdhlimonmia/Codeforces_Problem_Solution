#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    int odd = 0, even = 0, x;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        if(x%2==0)even++;
        else odd++;
    }
    cout<<min(odd,even)<<endl;
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