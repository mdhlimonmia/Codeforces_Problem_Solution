#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    int arr[3] = {1,2,0};
    int k = 0;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j < i; j++) cout<<" ";
        cout<<arr[k];
        for (int j = 1; j <= (n-i)*2-1; j++) cout<<" ";
        if(i != n)cout<<arr[k];
        k++;
        if(k==3) k = 0;
        cout<<endl;
    }

    for (int i = n-1; i > 0; i--)
    {
        for(int j = 1; j<i; j++) cout<<" ";
        cout<<arr[k];
        for(int j = 1; j<=(n-i)*2-1; j++)cout<<" ";
        cout<<arr[k];
        cout<<endl;
        k++;
        if(k==3)k=0;
    }
    
    
    
}

int main()
{
    Optimize();

     solve();
}