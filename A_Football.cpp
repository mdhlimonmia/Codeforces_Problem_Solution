#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int main()
{
    Limon();

     int n;cin>>n;
     map<string, int>m;
     string x;
     for (int i = 0; i < n; i++)
     {
        cin>>x;
        m[x]++;
     }
    int t = 0;
    for(auto u:m){
        if(u.second>t){
            t = u.second;
            x = u.first;
        }
    }
    cout<<x<<endl;
}