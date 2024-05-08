/*
* Titile: B_Vaccination.cpp
* Description: write description here
* Author: Muhammad Limon Mia
* Date: 24/03/2024 23:36:28
*/
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n,k,d,w;cin>>n>>k>>d>>w;
    vector<int>v(n);
    for(int i = 0; i<n; i++)cin>>v[i];
    
    int ans = 0, pack_t = 0, pack_s = 0; w +=d;
    
    for (int i = 0; i < n; i++)
    {
        if(pack_t <= v[i]+w && pack_s && pack_t >= v[i]) pack_s--;
        else{
            ans++;
            pack_s = k-1;
            pack_t = v[i]+w;
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