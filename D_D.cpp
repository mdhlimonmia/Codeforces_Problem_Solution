#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int main()
{
    Limon();

    string s; cin>>s;
    map<char,int>m;
    int lz = s.size();
    for (int i = 0; i < lz; i++)
    {
        m[s[i]]++;
    }
    int ans = 0;
    for(auto u:m){
        if(u.second%2==0)ans+=u.second;
        else ans+=u.second-1;
    }
    if(ans!=lz && ans%2==0)ans++;
    cout<<ans<<endl;
}