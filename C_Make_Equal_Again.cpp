#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    vector<int>v(n);
    for(int i = 0; i<n; i++) cin>>v[i];
    int x = 0, y = 0;
    for(int i=0; i<n; i++){
        if(v[0] != v[i])break;
        x++;
    }
    for(int i = n-1; i>=0; i--){
        if(v[i] != v[n-1])break;
            y++;
    }
    // cout<<"x :"<<x<<" y:"<<y<<endl;
    if(v[0] == v[n-1])cout<<max(0,(n-x-y))<<endl;
    else cout<<n-(max(x,y))<<endl;
    
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