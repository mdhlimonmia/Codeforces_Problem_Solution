#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int


int main()
{
    Limon();

    map<int,int>m;
    int x;
    for (int i = 0; i < 10; i++)
    {
        cin>>x;
        m[x%42]++;
    }
    cout<<m.size()<<endl;
}