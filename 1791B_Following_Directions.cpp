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
        int n, x = 0, y = 0;
    cin >> n;
    string s;
    cin >> s;
    for (int i = 0; i < n; i++)
    {
        if (s[i] == 'U')
            x++;
        else if (s[i] == 'D')
            x--;
        else if (s[i] == 'L')
            y--;
        else if (s[i] == 'R')
            y++;
        if (x == 1 && y == 1) break;
    }
    if (x == 1 && y == 1)
    {
        cout << "YES" << endl;
    }
    else cout<<"NO"<<endl;
    }
    
}