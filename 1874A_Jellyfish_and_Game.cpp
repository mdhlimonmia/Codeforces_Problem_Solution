#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

void solve(){
    lli n,m,k;cin>>n>>m>>k;
    vector<lli>a(n),b(m);
    lli sum = 0;
    for (lli i = 0; i < n; i++)
    {
        cin>>a[i];
    }
    for (lli i = 0; i < m; i++)
    {
        cin>>b[i];
    }
    if(k%2 != 0){
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if (a[0]<b[m-1]) swap(b[m-1],a[0]);
    }else{
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(a[0]<b[m-1]) swap(b[m-1],a[0]);
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        if(a[n-1]>b[0]) swap(a[n-1],b[0]);
    }
    for(auto u:a)sum+=u;
    cout<<sum<<endl;
  
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