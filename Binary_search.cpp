#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int


int main()
{
    Limon();

    lli n,q; cin>>n>>q;
    vector<int>v(n+1);
    for(int i = 0; i<n; i++)cin>>v[i];
    while (q--)
    {
        lli key; cin>>key;
        lli l = 0, r = n-1, m, idx = -1;
        while (l<=r)
        {
            m = (l+r)/2;
            if(v[m] == key){
                idx = m;
            }
            if(v[m]>=key) r = m-1;
            else l = m + 1;
        }
        cout<<idx<<endl;
    }
    
}