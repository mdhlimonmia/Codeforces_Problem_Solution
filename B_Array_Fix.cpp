#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    vector<int>v(n+1);
    for(int i = 1; i<=n; i++)cin>>v[i];
    bool k = 1;
    for (int i = n; i> 0; i--)
    {
        if(v[i]<v[i-1]){
            int pr, nx = v[i], t = v[i-1];
            while (t)
            {
                pr = t%10;
                if(pr>nx){
                    k = 0;
                    break;
                }
                t /=10;
                nx = pr;
            }
            v[i-1] = nx;
        }
        if(!k)break;
    }
    if(k)cout<<"YES\n";
    else cout<<"NO\n";
    // for(auto u:v)cout<<u<<" ";
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