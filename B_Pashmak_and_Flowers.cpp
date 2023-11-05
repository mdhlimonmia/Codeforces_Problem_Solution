#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int main()
{
    Limon();

    lli n,x;cin>>n;
    map<lli,lli>m;
    for (lli i = 0; i < n; i++)
    {
        cin>>x;
        m[x]++;
    }
    if(m.size()== 1){
        lli k = (n*(n-1))/2;
        cout<<0<<" "<<k<<endl;
    }
    else{
        auto q = *m.begin();
        auto r = *--m.end();
        cout<<r.first - q.first<<" "<<q.second * r.second<<endl;
    }
}