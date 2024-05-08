#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int main()
{
    // Limon();

    int n; cin>>n;
    vector<int>v(n);
    for(int i = 0; i<n; i++)cin>>v[i];
    sort(v.begin(), v.end());

    int q;cin>>q;
    while (q--)
    {
        int x; cin>>x;
        int ans = upper_bound(v.begin(),v.end(),x) - v.begin();
        cout<<ans<<endl;

    }
    
    
}