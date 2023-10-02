#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    lli n;cin>>n;
    vector<int>v1(n),v2(n);
    lli sum1 =0, sum2 = 0, min1 = LLONG_MAX, min2 = LLONG_MAX;
    for (int i = 0; i < n; i++)
    {
        cin>>v1[i];
        sum1 +=v1[i];
        if(min1>v1[i])min1 = v1[i];
    }
    for (int i = 0; i < n; i++)
    {
        cin>>v2[i];
        sum2 +=v2[i];
        if(min2>v2[i])min2 = v2[i];
    }
    lli result1 = min1*n + sum2;
    lli result2 = min2*n + sum1;
    if(result1<result2)cout<<result1<<endl;
    else cout<<result2<<endl;
    
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