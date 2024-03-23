#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
int fact(lli n){
    return (n == 1 || n == 0) ? 1 : fact(n - 1) * n;
}
void solve(){
    lli a,b;cin>>a>>b;
    lli ans = fact(min(a,b));
    cout<<ans<<endl;

}

int main()
{
    Limon();

    solve();
}