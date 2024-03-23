#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    vector<char>v(n);
    for(int i = 0; i<n; i++)cin>>v[i];
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        if(v[i] == '@')sum++;
        if(i != 0 && v[i] == '*' && v[i-1] == '*')break;
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