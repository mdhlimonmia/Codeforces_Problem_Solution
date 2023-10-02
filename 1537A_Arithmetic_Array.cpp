#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    double n;cin>>n;
    int x, ans = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        ans += x;
    }
    if(ans<n) cout<<1<<endl;
    else cout<<ans-n<<endl;
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