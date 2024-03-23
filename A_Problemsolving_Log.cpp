#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    int tem = n;
    string s; cin>>s;
    sort(s.begin(),s.end());
    map<char,int>m;
    for (int i = 0; i < n; i++)
    {
           m[s[i]]++;
    }
    int ans = 0;
    for(auto u:m){
        int k = u.first-'0'-16;
        // cout<<k<<endl;
        if(tem>=k){
            tem-=k;
            ans++;
        }
        else break;
    }
    cout<<ans<<endl;
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