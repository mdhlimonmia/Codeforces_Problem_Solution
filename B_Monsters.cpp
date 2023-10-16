#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
void solve(){
    int n, k;
    cin >> n >> k;
    int x;
    vector<pair<int,int>>p;
    for(int i=1; i<=n; i++){
        cin>>x;
        x %=k;
        if(x==0)x=k;
        p.emplace_back(x,-i);
    }
    sort(p.rbegin(), p.rend());

    for(auto u:p)cout<<-u.second<<" ";
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