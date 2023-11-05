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
    int ans = *min_element(arr,arr+n);
    cout<<ans+n-1<<endl;
}

int main()
{
    Limon();

       solve();
     
}