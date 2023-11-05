#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int sum(int n, int m){
    int s = n/m + n%m;
    if(s<m){
        return n/m;
    }
    return n/m + sum(s,m);
}

int main()
{
    Limon();
    int n,m;cin>>n>>m;
    int ans = sum(n,m);
    cout<<n+ans<<endl;
}