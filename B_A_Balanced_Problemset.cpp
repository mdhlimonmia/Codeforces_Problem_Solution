 #include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int x,n; cin>>x>>n;
    int ans = 0;

    for(int i = 1; i*i<=x; i++){
        if(x%i == 0){
            if(x/i>=n) ans = max(ans,i);
            if(i>=n) ans = max(ans,x/i);
        }
    }
    cout<<ans<<endl;
}

int main()
{
    Limon();
    int _; cin>>_;
    while (_--)
    {
        solve();
    }
         
}