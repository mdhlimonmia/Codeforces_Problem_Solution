#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    lli n;cin>>n;
    lli x = 0, t = n, k = 1;
    if((n&(n-1)) == 0){
        cout<<1<<endl<<n<<endl;
        return;
    }
    vector<lli>v;
    while(t){
        if(t&1){
            x++;
            lli p = n^k;
            // cout<<t<<" "<<p<<endl;
            v.push_back(p);
        }
        k<<=1;
        t>>=1;
    }
    cout<<x+1<<endl;
    for(lli i = x-1; i>=0; i--)cout<<v[i]<<" ";
    cout<<n<<endl;
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