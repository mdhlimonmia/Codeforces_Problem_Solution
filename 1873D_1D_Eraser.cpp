#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    int n,k;cin>>n>>k;
    string s;
    cin>>s;
    int to = 0, p = k, ans = 0;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == 'B'){
            to = 1;
            // cout<<i<<" ";
        }
        if(to == 1)p--;
        if(p == 0){
            to = 0;
            ans++;
            p = k;
        }
    }
    if(to != 0)ans++;
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