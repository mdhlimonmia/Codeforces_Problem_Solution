#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    Limon();
    
    int _; cin>>_;
    while (_--)
    {
        int n; cin>>n;
    string s; cin>>s;
    int max = 0;
    for (int i = 0; i < n; i++)
    {
         int k = s[i] - 'a' + 1;
        //  cout<<k;
         if(k>max) max = k;
    }
    cout<<max<<endl;
    }
    
    
   
}