#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

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
    int ans;
    ans = m[4]+m[2]/2+m[3]+m[2]%2;
    m[1]-=(m[3] + (m[2]%2)*2);
    if(m[1]>0){
        ans += m[1]/4;
        if(m[1]%4 !=0)ans++;
    }
    cout<<ans<<endl;
}