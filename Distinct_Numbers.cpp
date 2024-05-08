#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int main()
{
    Limon();

    int x, n;cin>>n;
    map<int,int>m;
    for(int i = 0; i<n; i++){
        cin>>x;
        m[x]++;
    }
    cout<<m.size()<<endl;
}