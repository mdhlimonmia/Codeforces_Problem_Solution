#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    string a,b;
    cin>>a>>b;
    int x = 0,y= 0;
    for (int i = 0; i < n; i++)
    {
        if(a[i] == 'R'){
            if(b[i] == 'S')x++;
            else if(b[i] == 'P')y++;
        }
        else if(a[i] == 'S'){
            if(b[i] == 'P')x++;
            else if(b[i] == 'R')y++;
        }
        else if(a[i] == 'P'){
            if(b[i] == 'R')x++;
            else if(b[i] == 'S')y++;
        }
    }
    // cout<<x<<" "<<y<<endl;
    if(x>=y)cout<<"0\n";
    else cout<<y-x<<endl;
    
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