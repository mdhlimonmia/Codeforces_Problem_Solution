#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    lli n,x;cin>>n;
    vector<int>arr;
    int k = 0;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        if(i!=0 && x <arr[i-1 + k]){
            arr.push_back(x);
            k++;
        }
        arr.push_back(x);
    }
    cout<<arr.size()<<endl;
    for(auto u:arr)cout<<u<<" ";
    cout<<endl;
    
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