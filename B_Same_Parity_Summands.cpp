#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
void solve(){
    int n,m;cin>>n>>m;
    if(n<m)cn;
    else if((n%m)%2 == 0){
        cy;
        int x = n/m, y = (n%m)/2;
        for (int i = 0; i < y; i++)
        {
            cout<<x+2<<" ";
        }
        for (int i = 0; i < m-y; i++)
        {
            cout<<x<<" ";
        }
        cout<<endl;
    }
    else if((m - n%m)%2==0){
        cy;
        int x = n/m -1, y;
        y = (m-(n%m))/2;
        for (int i = 0; i < y; i++)
        {
            cout<<x<<" ";
        }
        for (int i = 0; i < m-y; i++)
        {
            cout<<x+2<<" ";
        }
        cout<<endl;
    }
    else cn;
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