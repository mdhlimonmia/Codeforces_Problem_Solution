#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    map<int,int>m;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        m[x]++;
    }
    int t = m.size();
    if(n%2 != 0 && t%2 == 0)t--;
    if(n%2 == 0 && t%2 != 0)t--;
    cout<<t<<endl;
    
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