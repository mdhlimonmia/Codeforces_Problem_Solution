#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    int n;cin>>n;
    int task[2][n];
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>task[i][j];
        } 
    }
    for (int i = 0; i < n; i++)
    {
        if(task[0][i]> task[1][i-1] || i == 0)cout<<task[1][i]-task[0][i]<<" ";
        else cout<<task[1][i]-task[1][i-1]<<" ";
    }
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