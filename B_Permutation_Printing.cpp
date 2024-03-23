#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    int s = 1, l = n;
    for (int i = 1; i <= n; i++)
    {
        if(i&1){
            cout<<s<<" ";
            s++;
        }else{
            cout<<l<<" ";
            l--;
        }
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