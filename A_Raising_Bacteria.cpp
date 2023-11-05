#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int main()
{
    Limon();

     int n;cin>>n;
     int ans = INT32_MAX;
     for (int i = 1; i < n; i++)
     {
        int k = i;
        while(n>=k+k)k+=k;
        // cout<<"k"<<k<<endl;
        ans = min(ans,n-k+i);
     }
     
    cout<<ans<<endl;
}