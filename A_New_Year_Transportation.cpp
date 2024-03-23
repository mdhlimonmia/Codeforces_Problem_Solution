#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int main()
{
    Limon();

    int n,t;cin>>n>>t;
    int arr[n];
    for (int i = 0; i < n-1; i++)
    {
        cin>>arr[i];
    }
    bool k = 0;
    int i = 0;
    while (i<=t-1)
    {
        if(i == t-1){
            k = 1;
            break;
        }
        i = i+arr[i];
    }
    if(k)cout<<"YES\n";
    else cout<<"NO\n";
    
}