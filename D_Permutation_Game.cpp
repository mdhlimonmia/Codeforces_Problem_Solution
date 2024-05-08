#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n,k,pb,ps;cin>>n>>k>>pb>>ps;
    vector<int>p(n+1),a(n+1);
    for (int i = 1; i <= n; i++)
    {
        cin>>p[i];
    }
    for (int i = 1; i <= n; i++)
    {
        cin>>a[i];
    }
    lli bolby = 0,sara = 0;

    vector<lli>x(n+1),y(n+1);
    for (int i = 0; i < k && i <= n; i++)
    {
        x[i] = a[pb];
        y[i] = a[ps];
        pb = p[pb];
        ps = p[ps];
    }
    // int mx = x[0], index = 0;
    //bolby part
    // for(auto u:x)cout<<u<<" ";
    // cout<<endl;
    vector<lli>prsum(n+1);
    for (int i = 0; i < k && i< n; i++)
    {
        if(i==0)prsum[i] = x[i];
        else prsum[i] = prsum[i-1]+x[i];
    }
    for(int i = 0; i<k && i<n; i++){
        lli tem = prsum[i] + (x[i]*(k-i-1));
        if(tem>bolby) bolby = tem;
        // cout<<tem<<endl;
    }

    for (int i = 0; i < k && i<n; i++)
    {
        if(i==0)prsum[i] = y[i];
        else prsum[i] = prsum[i-1]+y[i];
    }
    for(int i = 0; i<k && i< n; i++){
        lli tem = prsum[i] + (y[i]*(k-i-1));
        if(tem>sara) sara = tem;
    }
    // cout<<"ans: \n";
    // cout<<bolby<<" "<<sara<<endl;
    if(bolby>sara)cout<<"Bodya\n";
    else if(bolby<sara) cout<<"Sasha\n";
    else cout<<"Draw\n";
    
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