#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n,a,q;cin>>n>>a>>q;
    int t = a, pls = 0;
    bool f = false;
    if(t == n)f = true;
    char c;
    for (int i = 0; i < q; i++)
    {
        cin>>c;
        if(c =='+'){
            t++;
            pls++;
        }
        else t--;
        if(t == n) f = true;
    }
    if(f)cout<<"YES\n";
    else if(a+pls>=n)cout<<"MAYBE\n";
    else cout<<"NO\n";
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