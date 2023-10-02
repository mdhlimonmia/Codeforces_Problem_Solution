#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    string s1,s = "314159265358979323846264338327";
    cin>>s1;
    int lz = s1.size();
    int i = 0;
    for (i = 0; i < lz; i++)
    {
        if(s[i] != s1[i]) break;
    }
    cout<<i<<endl;
    
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