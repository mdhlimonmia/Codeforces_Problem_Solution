#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int main()
{
    Limon();

    string s,t;cin>>s>>t;
    int sz = t.size();
    int k = 0;
    for (int i = 0; i < sz; i++)
    {
        if(s[k] == t[i])k++;
    }
    cout<<k+1<<endl;
    
}