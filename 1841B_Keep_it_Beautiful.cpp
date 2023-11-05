#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

void solve(){
    int n;cin>>n;
    vector<int>ans(n),v;
    int x, br=0;
    cin>>x;v.push_back(x) ;ans[0] = 1;
    for (int i = 1; i < n; i++)
    {
        cin>>x;
        int t = v.back(), f= v[0];
        if(br){
            if(x>=t && x<=f){
                ans[i] = 1;
                v.push_back(x);
            }

        }
        else{
            if(x>=t){
                ans[i] = 1;
                v.push_back(x);
            }
            else if(x<=f){
                v.push_back(x);
                ans[i] = 1;
                br = 1;
            }
        }
    }
    for(auto u:ans)cout<<u;
    cout<<endl;
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