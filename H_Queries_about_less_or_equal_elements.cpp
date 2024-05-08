#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

const int mx = 2e5 + 123;
int a[mx],b[mx];
int main()
{
    // Limon();

    lli n,m; cin>>n>>m;
    for(lli i = 0; i<n; i++)cin>>a[i];
    for(lli i = 0; i<m; i++)cin>>b[i];
    sort(a, a+n);
    // for(auto u:a)cout<<u<<" ";
    //cout<<endl;
    for(lli i = 0; i<m; i++){
        lli ans = 0, l = 0, r = n-1;
        while (l<=r)
        {
            lli m = (l+r)/2;
            if(a[m] <= b[i]){
                ans = m+1;
                l = m + 1;
            }else r = m - 1;
        }
        cout<<ans<<" ";
    }
    cout<<endl;
}