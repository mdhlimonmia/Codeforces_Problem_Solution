#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long
const lli mx = 1e6+123;
lli v[mx], n;

bool isValid(lli m){
    for(lli i= 0; i<n; i++){
        m+=v[i];
        if(m<=0)return false;
    }
    return true;
}
void solve(lli t){
    cin>>n;
    for(lli i = 0; i<n; i++)cin>>v[i];
    lli ans, l = 0, r = 1e14+123;
    while (l<=r)
    {
        lli m = (l+r)/2;
        if(isValid(m)){
            r = m-1;
            ans = m;
        }else l = m + 1;
    }
    if(ans == 0)ans++;
    cout<<"Scenario #"<<t<<": "<<ans<<endl;
}

int main()
{
    Limon();

    lli _;cin>>_;
    for(lli t = 1; t<=_; t++){
        solve(t);
    }
}