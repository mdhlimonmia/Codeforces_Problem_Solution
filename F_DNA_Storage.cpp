#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
void solve(){
    int n;cin>>n;
    string s; cin>>s;
    for (int i = 0; i < n-1; i+=2)
    {
        if(s[i] == '0' && s[i+1] == '0')cout<<'A';
        else if(s[i] == '0' && s[i+1] == '1')cout<<'T';
        else if(s[i] == '1' && s[i+1] == '0')cout<<'C';
        else if(s[i] == '1' && s[i+1] == '1')cout<<'G';
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