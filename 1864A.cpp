#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int x,y,n;cin>>x>>y>>n;
    int t = (n*(n-1))/2;
    if(y-x<t)cout<<-1<<endl;
    else{
        cout<<x<<" ";
        t = ((n-1)*(n-2))/2;
        for (int i = 1; i <n; i++)
        {
            cout<<y-t<<" ";
            t = ((n-i-1)*(n-i-2))/2;
        }
        cout<<endl;
        
    }
    
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