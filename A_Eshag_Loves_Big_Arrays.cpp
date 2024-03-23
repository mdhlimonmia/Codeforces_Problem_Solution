#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

void solve(){
    int n;cin>>n;
    int x;
    map<int,int>m;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        m[x]++;
    }
    auto ans = m.begin();
    cout<<n-ans->second<<endl;

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