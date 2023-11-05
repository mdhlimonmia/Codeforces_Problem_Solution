#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int main()
{
    Limon();


    int n,m; cin>>n>>m;
    char a[n][m];
    bool k;
    for (int i = 0; i < n; i++)
    {
        k = i%2;
        for (int j = 0; j < m; j++)
        {
            cin>>a[i][j];
            if(a[i][j]=='.'){
                if(k)a[i][j] = 'W';
                else a[i][j] = 'B';
            }
            k = !k;
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
           cout<<a[i][j];
 
        }
        cout<<endl;
    }
}