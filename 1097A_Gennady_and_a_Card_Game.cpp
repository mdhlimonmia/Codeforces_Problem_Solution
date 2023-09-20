#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    string s,t;cin>>s;
    int p = 0;
    for (int i = 0; i < 5; i++)
    {
        cin>>t;
        if(t[0] == s[0] || t[1] == s[1]) p = 1;
    }
    if(p)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
}

int main()
{
    Limon();

    // int _;cin>>_;
    // while (_--)
    // {
	   solve();
    // }
    
}