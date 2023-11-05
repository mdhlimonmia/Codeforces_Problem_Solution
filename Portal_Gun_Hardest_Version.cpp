#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    int x,ans;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        if(x == 1) ans = i+1;
    }
    cout<<ans<<endl;
}

int main()
{
    Limon();

    
       solve();
     
}