#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int main()
{
    Limon();

    int n;cin>>n;
    string s;cin>>s;
    int  z=0, on=0;
    for (int i = 0; i < n; i++)
    {
       if(s[i] == '0')z++;
       else on++;
    }
    cout<<n-(min(z,on)*2)<<endl;
}