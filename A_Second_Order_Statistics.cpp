#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"

int main()
{
    Limon();

    int n;cin>>n;
    map<int,int>m;
    int x;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        m[x]++;
    }
    if(m.size()<2)cn;
    else{
        auto k = *(++m.begin());
        cout<<k.first<<endl;
    }
    
}