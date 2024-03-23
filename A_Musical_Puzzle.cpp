#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    string s; cin>>s;
    map<string,int>m;
    for (int i = 1; i < n; i++)
    {
        string k = "";
        k += s[i-1];
        k+= s[i];
        m[k]++;
    }
    cout<<m.size()<<endl;
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