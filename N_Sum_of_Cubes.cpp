#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long 
const lli mx = 1e4+123;
lli arr[mx];
void solve(){
    lli n; cin>>n;
    for(lli i = 1; i<=mx; i++){
        lli k = n - i*i*i;
        if(k <= 0)break;
        bool isHare = binary_search(arr+1, arr+mx, k);
        // cout<<isHare<<endl;
        if(isHare){
            cout<<"YES\n";
            return;
        }
    }
    cout<<"NO\n";
}

int main()
{
    Limon();
    for(lli i = 1; i<=1e4; i++) arr[i] = i*i*i;
    lli _;cin>>_;
    while (_--)
    {
      solve();
    }
}