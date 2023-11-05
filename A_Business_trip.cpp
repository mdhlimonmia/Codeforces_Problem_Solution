#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int


int main()
{
    Limon();

    int n;cin>>n;
    int arr[12];
    for (int i = 0; i < 12; i++)
    {
        cin>>arr[i];
    }
    sort(arr,arr+12,greater<int>());
    int i = 0, sum = 0;
    while(sum<n){
        sum+=arr[i];
        i++;
        if(i==13)break;
    }
    if(i>12)cout<<-1<<endl;
    else cout<<i<<endl;

    
}