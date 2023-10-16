#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
void solve(){
    int n;cin>>n;
    vector<int>arr(n), v;
    for(int i =0 ; i<n; i++)cin>>arr[i];
    v = arr;
    sort(v.begin(), v.end());
    for (int i = 0; i < n; i++)
    {
        if((arr[i]%2 !=0 && v[i]%2 == 0) || (arr[i]%2 == 0 && v[i]%2 != 0)){
            cn;
            return;
        }
    }
    cy;
     
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