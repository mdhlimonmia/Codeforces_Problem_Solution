#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    int k = n/3;
    if(n%3 == 0){
        cout<<k<<" "<<k+1<<" "<<k-1<<endl;
    }
    else if((k*3 + 1) == n){
        cout<<k<<" "<<k+2<<" "<<k-1<<endl;
    }else{
        cout<<k+1<<" "<<k+2<<" "<<k-1<<endl;

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