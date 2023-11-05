#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int main()
{
    Limon();

    int n,x;cin>>n;
    pair<int,int>p[n];
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        p[i] = {x,i+1};
    }
    sort(p,p+n);
    if(p[0].first == p[1].first)cout<<"Still Rozdil\n";
    else cout<<p[0].second<<endl;
}