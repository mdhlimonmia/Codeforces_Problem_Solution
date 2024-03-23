#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    vector<int>v(n);
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
    }
    int q; cin>>q;
    int p[n];
    // memset(p, -1, sizeof(p));
    p[0]=-1;
    for (int i = 1; i < n; i++)
    {
        p[i] = p[i-1];
        if(v[i] != v[i-1])
            p[i] = i-1;
    }
    
    while (q--)
    {
        int l,r; cin>>l>>r;
        l -=1, r-=1;
        if(p[r]>=l) cout<<p[r]+1<<" "<<r+1<<endl;
        else cout<<-1<<" "<<-1<<endl;
    }
    
    cout<<endl;
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