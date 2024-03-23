#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int main()
{
    Limon();

    lli n,m,k; cin>>n>>m>>k;
    lli t = n*k;
    cout<<setprecision(2)<<fixed;
    if(720<m/(t*1.0))cout<<-1<<endl;
    else cout<<m/(t*1.0)<<endl;
}