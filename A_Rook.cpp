#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    string s;cin>>s;
    for (int i = 1; i <= 8; i++)
    {
        if(i !=s[1]-'0')cout<<s[0]<<i<<endl;
    }
    char arr[8] = {'a','b','c','d','e','f','g','h'};
    for (int i = 0; i < 8; i++)
    {
        if(arr[i]!=s[0])cout<<arr[i]<<s[1]<<endl;
    }
    
    
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