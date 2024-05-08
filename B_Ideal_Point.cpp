/*
* Titile: B_Ideal_Point.cpp
* Author: Muhammad Limon Mia
* Date: 24/03/2024 23:37:06
*/
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n,k;cin>>n>>k;
    int r = INT_MAX, l = 0, x, y;
    for (int i = 0; i < n; i++)
    {
        cin>>x>>y;
        if(x<=k && y>= k){
            l = max(l,x);
            r = min(r,y);
        }
    }
    // cout<<l<<" "<<r<<endl;
    if( l == r && l == k) cout<<"YES\n";
    else cout<<"NO\n";

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