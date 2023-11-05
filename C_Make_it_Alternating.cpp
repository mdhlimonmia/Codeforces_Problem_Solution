#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    string s;cin>>s;
    lli lz = s.size(),count = 0, fac=1;
    for (lli i = 1; i < lz; i++)
    {
        if(s[i]==s[i-1])count++;
    }
    for(lli i = 1; i<=count+1; i++){
        fac*=i;
        if(fac>=998244353){
            fac = 998244353;
            break;
        }
    }
    cout<<count<<" "<<fac<<endl;

    
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