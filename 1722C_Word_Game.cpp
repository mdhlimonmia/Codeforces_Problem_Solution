#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    int n;cin>>n;
    //map<index_type, data_type> variable;
    map<string, int> m;
    string s[3][n];
    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin>>s[i][j];
            m[s[i][j]]++;
        }
    }
    // for (int i = 0; i < 3; i++)
    // {
    //     for (int j = 0; j < n; j++)
    //     {
    //         cout<<s[i][j]<<" ";
    //         cout<<m[s[i][j]]<<endl;
    //     }
    // }
    for (int i = 0; i < 3; i++)
    {
        int ans = 0;
        for (int j = 0; j < n; j++)
        {
            if(m[s[i][j]] == 1) ans+=3;
            else if(m[s[i][j]] == 2) ans++;
        }
        cout<<ans<<" ";
    }
    cout<<endl;
    
    
    
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