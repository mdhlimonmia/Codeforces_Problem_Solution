#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    string s; cin>>s;
    int i,j;
    for (i = 0; i<n; i++)
    {
        if(s[i] == 'A')break;
    }
    for(j = n-1; j>=0; j--){
        if(s[j] == 'B')break;
    }
    // cout<<i<<" "<<j<<endl;
    if(j>i)cout<<j-i<<endl;
    else cout<<0<<endl;
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