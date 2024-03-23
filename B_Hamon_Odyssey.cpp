#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
void solve(){
    int n;cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++) cin>>arr[i];
    int k = arr[0];
    int ans = 1;
    for (int i = 0; i < n; i++)
    {
        k &=arr[i];
        if(k == 0){
            if(i == n-1)break;
            ans++;
            k = arr[i+1];
        }
    }
    if(k !=0)ans--;
    ans = max(1,ans);
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