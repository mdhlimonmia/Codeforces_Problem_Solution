#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    Limon();
    int _; cin>>_;
    while (_--)
    {
    
        string s; cin>>s;
        int len = s.length();
        // cout<<len;
        int a = 0, b = 0, c = 0;
        for(auto u : s){
            if(u == 'A') a++;
            else if( u == 'B') b++;
            else if( u == 'C') c++;
        } 
        // cout<<a<<" "<<b<<" "<<c;
        if(a+c == b)cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
}