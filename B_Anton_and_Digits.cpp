#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int main()
{
    //Limon();

    int tw,th,fv,xi; cin>>tw>>th>>fv>>xi;
    int mx = min({tw,fv,xi});
    lli sum = mx*256;
    tw -=mx;
    int b = min(tw,th);
    if(b != 0) sum += b*32;
    cout<<sum<<endl;
}