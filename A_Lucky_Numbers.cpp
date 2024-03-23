#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n,m;cin>>n>>m;
    int ans = -1, k = 0;
    for (int i = m; i>=n; i--)
    {
        string s = to_string(i);
        sort(s.begin(), s.end());
        int l = s.size();
        int t = abs(s[0]-s[l-1]);
        if(t>ans){
            ans = t;
            k = i;
        }
        if(t == 9)break;
    }
    cout<<k<<endl;
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