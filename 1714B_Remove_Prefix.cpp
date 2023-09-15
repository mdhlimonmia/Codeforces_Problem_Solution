#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

bool tosecond(const pair<int, int> &a, const pair<int, int> &b){
    return a.first<b.first;
}

void solve(){
    int n;cin>>n;
    pair<int, int> a[n];
    for (int i = 0; i < n; i++)
    {
        cin>>a[i].first;
        a[i].second = i+1;
    }
    sort(a,a+n);
    // for(auto u:a) cout<<u.first<<" "<<u.second<<endl;
    int ans = 0;
    for (int i = 1; i < n; i++)
    {
        if(a[i].first == a[i-1].first) ans = max(ans, a[i-1].second);
    }
    cout<<ans<<endl;
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