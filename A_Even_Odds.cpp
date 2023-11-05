#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int main()
{
    Limon();
    lli n,k;cin>>n>>k;
    if(k>(n+1)/2){
        cout<<((k-(n+1)/2))*2<<endl;
    }else{
        cout<<k*2 - 1<<endl;
    }
}