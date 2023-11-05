#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int main()
{
    Limon();

    int n;cin>>n;
    map<int,int>l,r;
    int x,y;
    for (int i = 0; i < n; i++)
    {
        cin>>x>>y;
        l[x]++;
        r[y]++;
    }
    int ans = min(l[1],l[0])+min(r[1],r[0]);
    cout<<ans<<endl;
}