#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
/*  chage here */
#define int long long int //Chence here for all int value to Long long int 

void solve(){
    int n,p;cin>>n>>p;
    vector<int>a(n),b(n);
    pair<int,int>m[n];
    for (int i = 0; i < n; i++)cin>>a[i];
    for (int i = 0; i < n; i++){
        cin>>b[i];
        m[i] = {b[i],a[i]};
    }
    sort(m,m+n);
    int k = 1;
    int ans = p;
    for(auto u:m){
        // cout<<u.first<<" "<<u.second<<endl;
        if(u.first>=p){
            long long  t = n-k;
            ans+=(p*t);
            break;
        }
        else if(u.second+k>=n){
            int t = n-k;
            ans+= u.first*t;
            break;
        }
        else ans += u.first*u.second;
        k+=u.second;
        if(k==n)break;
    }
    cout<<ans<<endl;
}

int32_t main()
{
    Limon();

     int _;cin>>_;
     while (_--)
     {
       solve();
     }
}