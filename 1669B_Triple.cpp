#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int result(map<int, int> &m, int a[],int n){
    for (int i = 0; i < n; i++)
    {
        if(m[a[i]]>=3){
            cout<<a[i]<<endl;
            return 0;
        }
    }
    cout<<-1<<endl;
    return 0;
}

void solve(){
    int n;cin>>n;
    int arr[n];
    map<int,int>m;
    for (int i = 0; i < n; i++)
    {
        cin>>arr[i];
        m[arr[i]]++;
    }
    result(m,arr,n);   
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