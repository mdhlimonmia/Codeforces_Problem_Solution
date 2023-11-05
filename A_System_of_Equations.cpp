#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int main()
{
    Limon();

    int n,m;cin>>n>>m;
    if(n<m){
        int t = n;
        n=m;
        m=t;
    }
    int x = n, y = m, ans = 0;
    while(x>=0){
        int tem = sqrt(x);
        if(tem*tem == x){
            int j = n - x;
            if(j*j + tem == m)ans++;
            x--;
        }
        else{
            x = tem*tem;
        }
    }
    cout<<ans<<endl;
}