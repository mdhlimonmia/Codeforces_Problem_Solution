#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    vector<int>v1(n);
    for(int i = 0; i<n; i++)cin>>v1[i];
    string s; cin>>s;

    vector<pair<int,int>>v(n);
    for(int i = 0; i<n; i++) v[i] = {(s[i]-'0'), v1[i]};

    sort(v.begin(),v.end());

    // for(int i = 0; i<n; i++){
    //     cout<<s[i]<<" "<<v1[i]<<endl;
    // }
    // cout<<s<<endl;
    int ans = 0, x = 0;
    map<int,int>m;
    for(auto u:v){
        if(u.first == 0){
            ans++;
            m[u.second]++;
        }else{
            for(auto k:m){
                // cout<<"k "<<k.first<<endl;
                if(k.first>u.second && k.second>0){
                    ans++;
                    m[k.first]--;
                }
            }
        }
        // cout<<ans<<endl;
    }
    // for(auto u:v)cout<<u.first<<" "<<u.second<<endl;
    // cout<<endl;
    if(ans==0)ans++;
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