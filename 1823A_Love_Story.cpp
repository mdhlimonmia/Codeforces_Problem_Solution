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
        string s1 ="codeforces", s2; 
        cin>>s2;
        int ans = 0;
        for (int i = 0; i < 10; i++)
        {
            if(s1[i]!=s2[i]) ans++;
        }
        cout<<ans<<endl;
    }
}