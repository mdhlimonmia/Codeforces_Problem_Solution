#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    if(n == 1)cout<<1<<endl;
    else if(n%2)cout<<-1<<endl;
    else{
        for (int i = 1; i <= n; i+=2)
        {
            cout<<i+1<<" "<<i<<" ";
        }
        cout<<endl;
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