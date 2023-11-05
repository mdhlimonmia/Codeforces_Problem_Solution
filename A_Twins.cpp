#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int


int main()
{
    Limon();
    int n;cin>>n;
    vector<int> arr(n);
    int sum = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    sort(arr.rbegin(),arr.rend());
    int s=0,i=0;
    for (i = 0; i < n; i++)
    {
        s+=arr[i];
        if(s>sum-s)break;
    }
    cout<<i+1<<endl;
    

    
}