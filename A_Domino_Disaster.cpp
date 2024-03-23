#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    char x;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        if(x=='U')cout<<"D";
        else if(x=='D')cout<<"U";
        else cout<<x;
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