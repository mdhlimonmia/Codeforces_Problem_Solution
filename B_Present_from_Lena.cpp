#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int main()
{
    Limon();

    int n;cin>>n;


    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= (n-i+n-i); j++)cout<<" ";
        
        for (int j = 0; j < i; j++)
        {
            cout<<j<<" ";
        }
        for (int j = i; j>=0; j--)
        {
            cout<<j;
            if(j != 0)cout<<" ";
        }
        cout<<endl;
    }
    for (int i = n; i>=0; i--)
    {
        for (int j = (n-i+n-i); j > 0; j--)cout<<" ";
        for (int j = 0; j < i; j++)
        {
            cout<<j<<" ";
        }
        for (int j = i; j>=0; j--)
        {
            cout<<j;
            if(j != 0)cout<<" ";
        }
        cout<<endl;
    }
    
    
}