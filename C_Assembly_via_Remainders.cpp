#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    vector<int>v(n+1);
    for (int i = 0; i < n-1; i++)
    {
        cin>>v[i];
    }
    int x = v[0]+1;
    cout<<x<<" ";
    for(int i = 0; i<n-1; i++){
        int t = x;
        if(i == n-2){
            cout<<x+v[i]<<endl;
            return;
        }
        while (x+v[i]<=v[i+1])
        {
            x+=t;
            // cout<<x<<" ";
        }
        // cout<<endl;
        x+=v[i];
        cout<<x<<" ";
    }
}
int main()
{
    // Limon();

     int _;cin>>_;
     while (_--)
     {
       solve();
     }
}