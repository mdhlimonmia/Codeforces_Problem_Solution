#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    int seq = 1, ans = 1;
    for (int i = 1; i < n; i++)
    {
        if(arr[i]>=arr[i-1])seq++;
        else{
            ans = max(ans,seq);
            seq = 1;
        }
    }
     ans = max(ans,seq);
    cout<<ans<<endl;
}

int main()
{
    Limon();

    // int _;cin>>_;
    // while (_--)
    // {
       solve();
    // }
}