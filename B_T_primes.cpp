#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"

int main()
{
    Limon();

    lli n;cin>>n;
    lli arr[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    for (lli i = 0; i <n; i++)
    {
        lli t = sqrt(arr[i]);
        if(t<2 || (t>2 && t%2==0))cn;
        else if(t*t == arr[i]){
            int ans = 0;
            for (int j = 3; j*j <= t; j+=2)
            {
                if(t%j == 0)ans++;
                if(ans>0)break;
            }
            if(ans==0)cy;
            else cn;
        
        }else cn;
    }
}