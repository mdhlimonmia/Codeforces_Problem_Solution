#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int main()
{
    Limon();

    int n,m; cin>>n>>m;
    int arr[m];
    for (int i = 0; i < m; i++)
    {
        cin>>arr[i];
    }
    lli ans = arr[0];
    for (int i = 1; i < m; i++)
    {
        if(arr[i]>=arr[i-1])ans += arr[i] - arr[i-1];
        else{
            int k = n-arr[i-1];
            ans += k + arr[i];
        }
    }
    cout<<ans-1<<endl;
    
}