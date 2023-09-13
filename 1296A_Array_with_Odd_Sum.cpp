#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    Limon();

    int _; cin>>_;
    while (_--)
    {
        int n; cin>>n;
    int arr[n], sum = 0;
    bool odd = false, even = false;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        odd |= arr[i] % 2 != 0;
        even |= arr[i] % 2 == 0;
        sum += arr[i];
    }
    if(sum %2 != 0 || (odd && even))cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
    }
    
    
}