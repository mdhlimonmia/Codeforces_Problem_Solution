#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int


void solve(){
    int n,k,q; cin >> n>>k>>q;
    vector<lli>a(k+1),b(k+1);
    for(int i = 1; i<=k; i++)cin>>a[i];
    for(int i = 1; i<=k; i++)cin>>b[i];
    
    
    while (q--)
    {
        int x;
        cin>>x;
        int l = 1, r = k, ind;
        while (l<=r)
        {
            int m = (l+r)/2;
            if(a[m]>= x){
                ind = m;
                r = m-1;
                // cout<<"m "<<m<<endl;
            }else l = m+1;
        }
       long double t,d,f;
        t = b[ind] - b[ind-1];
        d = a[ind] - a[ind - 1];
        // f = (t/(d*1.0));
       lli ans = b[ind-1] + (t*(x-a[ind-1]))/(d*1.0);
        cout<<ans<<" ";
    }
    cout<<endl;
}

int main()
{
    // Limon();
    int _; cin >> _;
    while (_--) {
        solve();
    }
    return 0;
}