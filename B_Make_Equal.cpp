#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    int sum = 0;
    vector<int> v(n);
    for(int i = 0; i<n; i++){
        cin>>v[i];
        sum += v[i];
    }
    bool k = 1;
    int x = sum/n, hav = 0;
    for(int i = 0; i<n; i++){
        if(v[i]>x) hav += (v[i] - x);
        else if(v[i]<x){
            if(hav + v[i]>=x){
                hav -= (x-v[i]);
            }
            else{
                k = 0;
                break;
            }
        }
    }
    if(k) cout<<"YES\n";
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