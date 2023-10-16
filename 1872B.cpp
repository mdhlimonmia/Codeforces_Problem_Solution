#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    int x,y;
    int result = 10000;
    for (int i = 0; i < n; i++)
    {
        cin>>x>>y;
        int temp = x+y/2;
        if(y%2 == 0)temp--;
        result = min(result,temp);
    }
    cout<<result<<endl;
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