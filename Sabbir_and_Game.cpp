#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
const int mx = 1123;
int v[mx], n;

bool isValid(lli m){
    for(int i= 0; i<n; i++){
        m+=v[i];
        if(m<=0)return false;
    }
    return true;
}
void solve(){
    cin>>n;
    for(int i = 0; i<n; i++)cin>>v[i];
    lli ans, l = 0, r = 1e10+123;
    while (l<=r)
    {
        lli m = (l+r)/2;
        if(isValid(m)){
            r = m-1;
            ans = m;
        }else l = m + 1;
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