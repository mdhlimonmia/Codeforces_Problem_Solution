#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n,k;cin>>n>>k;
    string s;cin>>s;
    sort(s.begin(),s.end());
    map<char,int>m;
    int ans = 0;
    for(auto u:s){
        if(u>='A' && u<='Z'){
            m[u]++;
            // cout<<u<<" "<<m[u]<<endl;
        }
        else{
            char c = u&'_';
            // cout<<u<<" "<<c<<" "<<m[c]<<endl;
            if(m[c]>0){
                m[c]--;
                ans++;
            }else if(m[u]>1 && k>0){
                ans++;
                m[u]--;
                k--;
            }else{
                m[u]++;
            }
            // cout<<u<<" "<<c<<" "<<m[c]<<endl;
        }
    }
    // cout<<"map: \n";
    for(auto u:m){
        // cout<<u.first<<" "<<u.second<<endl;
        if(k==0)break;
        if(u.second>=2){
           lli x = u.second/2;
           if(x>k){
            ans +=k;
            k = 0;
           }else{
            ans +=x;
            k-=x;
           }
        }
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