#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    lli n,l,r;cin>>n>>l>>r;
    vector<lli>v(n);
    for(auto &u:v)cin>>u;
    lli ans = 0;
    lli t = 0, ind = -1;
    for(int i = 0; i<n; i++){
        if(v[i]>=l && v[i]<=r){
            ans++;
            ind = -1;
            t = 0;
        }
        else if(v[i]<l){
            if(v[i]+t>= l && v[i]+t<=r){
                ans++;
                t = 0;
                ind = -1;
            }
            else if(v[i]+t<l){
                t+=v[i];
                if(ind == -1) ind = i;
            }
            else if(v[i]+t>=l && v[i]+t>r){
                while (ind<i)
                {
                    if(t+v[i]<=r)break;
                    t -= v[ind];
                    ind++;
                }
                if(v[i]+t>= l && v[i]+t<=r){
                    ans++;
                    ind = -1;
                    t = 0;
                }else
                {
                    t += v[i];
                }
                
            }
        }else{
            ind = -1;
            t = 0;
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