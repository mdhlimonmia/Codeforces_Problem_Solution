#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    lli n;cin>>n;
    string s; cin>>s;
    sort(s.begin(), s.end());
    lli t = 1, m = 0;
    for (int i = 0; i < n; i++)
    {
        if(s[i]==s[i-1])t++;
        else{
            m = max(m,t);
            t=1;
        }
    }
    m = max(m,t);
    t = n-m;
    // cout<<m<<" "<<t<<endl;
    if(m>t){
        // if(n%2 !=0)m++;
        cout<<m-t<<endl;
    }else{
        if(n%2!=0)cout<<1<<endl;
        else cout<<0<<endl;
    }
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