#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s[8];
    for(int i=0; i<8; i++) cin>>s[i];
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 7; j++)
        {
            if(s[i][j] == s[i][j+1]){
                cout<<"NO\n";
                return 0;
            }
        }
    }
    cout << "YES\n";
    return 0;
}