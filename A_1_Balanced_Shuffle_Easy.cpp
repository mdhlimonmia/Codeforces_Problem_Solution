#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int main()
{
    Limon();
    string s; cin>>s;
    lli n = s.size(), b = 0;
    pair<int,int>p[n];
    for(int i = 0; i<n; i++){
        p[i] = {b,-i};
        if(s[i] == '(')b++;
        else b--;
    }
    sort(p,p+n);
    for(auto u:p)cout<<s[-u.second];
    cout<<endl;
    return 0;
}