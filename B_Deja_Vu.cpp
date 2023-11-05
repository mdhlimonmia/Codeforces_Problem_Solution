#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
lli pw[30];

void solve(){
    lli n,q;cin>>n>>q;
    lli arr[n];
    for (lli i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    lli x;
    for (lli i = 0; i < q; i++)
    {
        cin>>x;
        for(int j = 0; j<n; j++){
            if(arr[j]%pw[x] == 0) arr[j] += pw[x-1];
        }
    }
    for(int u:arr)cout<<u<<" ";
    cout<<endl;
}

int main()
{
    Limon();
    pw[0] = 1;
    for(int i = 1; i<31; i++)pw[i] = pw[i-1]+pw[i-1];
     int _;cin>>_;
     while (_--)
     {
       solve();
     }
}