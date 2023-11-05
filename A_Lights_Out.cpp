#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int main()
{
    Limon();

    int a1,a2,a3,b1,b2,b3,c1,c2,c3;
    cin>>a1>>a2>>a3>>b1>>b2>>b3>>c1>>c2>>c3;

    cout<<((a1+a2+b1)%2==0 ? 1:0)<<((a1+a2+a3+b2)%2==0 ? 1:0)<<((a2+a3+b3)%2==0 ? 1:0)<<endl;
    cout<<((a1+b1+c1+b2)%2==0 ? 1:0)<<((b1+b2+b3+a2+c2)%2==0 ? 1:0)<<((b2+b3+a3+c3)%2==0 ? 1:0)<<endl;
    cout<<((b1+c1+c2)%2==0 ? 1:0)<<((c1+c2+c3+b2)%2==0 ? 1:0)<<((c2+c3+b3)%2==0 ? 1:0)<<endl;
     
}