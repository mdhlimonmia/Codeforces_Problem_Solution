#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    lli n,m;cin>>n>>m;
   lli arr1[n],arr2[m];
    lli min = 9000000000, max = 0, x = 0;
    for (lli i = 0; i < n; i++){
        cin>>arr1[i];
        x ^=arr1[i];
    }
    if(x<min)min = x;
    if(x>max)max = x;
    for (lli k = 0; k < m; k++){
        cin>>arr2[k];
        for(lli i = 0; i<n; i++) arr1[i] = arr1[i]|arr2[k];
        lli x = arr1[0];
        for (lli i = 1; i < n; i++){
            x ^=arr1[i];
        }
        if(x<min)min = x;
        if(x>max)max = x;
    }

    cout<<min<<" "<<max<<endl;
    
}

int main()
{
    Limon();

    lli _;cin>>_;
    while (_--)
    {
	   solve();
    }
    
}