#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    
    if(n==1){
        cout<<0<<endl;
        return;
    }
    int ans = 0;
    while(1){
        if(n%6 == 0 && n/6 == 1){
            ans++;
            cout<<ans<<endl;
            return;
        }
        else if (n%6 == 0)
        {
            ans++;
            n/=6;
        }
        else if(n%6!=3){
            cout<<-1<<endl;
            return;
        }
        else{
            ans++;
            n*=2;
        }
        
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