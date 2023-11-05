#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int main()
{
    Limon();

    int n;cin>>n;
    int arr[7];
    for (int i = 0; i < 7; i++)
    {
        cin>>arr[i];
    }

    int ans;
    for (int i = 0; i < 7; i++)
    {
        n-=arr[i];
        if(n<=0){
            ans = i+1;
            break;
        }
        if(i==6 && n>0)i=-1;

        // cout<<i<<" "<<n<<endl;
    }
    cout<<ans;
    
}