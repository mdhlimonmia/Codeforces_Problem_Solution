#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int main()
{
    Limon();

    lli x,y;cin>>x>>y;
    lli a = x*y;
    lli q = sqrt(a);
    while(1)
    {
        if(a%(q*q) == 0 && x%q == 0 && y%q == 0){
            cout<<(a/(q*q))<<endl;
            break;
        }else q--;
    }
    
}