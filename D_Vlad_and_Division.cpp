#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    vector<lli>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    // sort(v.begin(), v.end());
    int ans = n;
    for (int i = 0; i < n; i++)
    {
        // if(i!= 0 && v[i] != v[i-1] && v[i] == v[i+1]) continue;
        if(v[i] == -1) continue;
        for (int j = i+1; j < n; j++)
        {
            if(v[j] == -1) continue;
            lli t = v[i]^v[j];
            // cout<<t<<" ";
            if(t == 2147483647){
                ans--;
                v[j] = -1;
                break;
            }
        }
        // cout<<endl;
    }
    cout<<max(1,ans)<<endl;
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