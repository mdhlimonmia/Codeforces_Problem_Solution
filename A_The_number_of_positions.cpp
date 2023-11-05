#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int main()
{
    Limon();

    int n,x,y;cin>>n>>x>>y;
    cout<<n-max(x+1,n-y)+1<<endl;
}