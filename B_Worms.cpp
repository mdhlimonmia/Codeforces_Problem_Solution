#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

const lli mx = 1e6;
lli arr[mx];

// int main()
// {
//     Limon();

//     lli n; cin>>n;
//     vector<lli>v(n+1);
//     for(lli i = 1; i<=n; i++)cin>>v[i];
//     lli pre = 0;
//     for(lli i = 1; i<=n; i++){
//         v[i] += v[i-1];
//         for(lli j = pre; j<=v[i]; j++) arr[j] = i;
//         pre = v[i] + 1;
//     }
//     lli q; cin>>q;
//     while (q--)
//     {
//         lli x;
//         cin>>x;
//         cout<<arr[x]<<endl;
//     }
    
// }


//Using Binary Search
int main(){
    // Limon();
    
    lli n;cin>>n;
    for(int i = 1; i<=n; i++){
        cin>>arr[i];
        arr[i] += arr[i-1];
    }

    // for(int i = 1; i<=n; i++)cout<<arr[i]<<" ";
    lli q; cin>>q;
    while (q--)
    {
        lli x; cin>>x;
        lli l = 1, r = n, ans;
        while (l<=r)
        {
            lli m = (l+r)/2;
            if(arr[m]>= x && arr[m-1] - 1 <=x){
                ans = m;
                r = m - 1;
            }else if(arr[m]> x) r = m-1;
            else l = m+1;
        }
        
        cout<<ans<<endl;
    }
    
}
