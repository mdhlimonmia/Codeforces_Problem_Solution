#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

void solve(){
    lli ax,ay,bx,by,cx,cy;
    cin>>ax>>ay>>bx>>by>>cx>>cy;
    lli x,y;
    if((ax-bx>0 && ax-cx<0) || (ax - bx <0 && ax - cx >0)) x = 0;
    else x = min(abs(ax-bx), abs(ax-cx));
    if((ay-by>0 && ay-cy<0) || (ay - by <0 && ay - cy >0)) y = 0;
    else y = min(abs(ay-by), abs(ay-cy));

    cout<<x+y+1<<endl;

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