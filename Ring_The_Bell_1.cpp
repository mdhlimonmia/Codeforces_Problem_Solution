#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int main()
{
    Limon();

    int x,y,z; cin>>x>>y>>z;
    int k = max({x,y,z});
    int m = k, i = 2;
    while (1)
    {
        if(m%x == 0 && m%y == 0 && m%z == 0){
            cout<<m*2<<endl;
            break;
        }
        else{
            m = k*i;
            i++; 
        }
    }
    
}