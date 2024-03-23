#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int


int main()
{
    Limon();

    string s; cin>>s;
    int lz = s.size();
    char t = s[0];
    for (int i = 0; i < lz; i++)
    {
        if(s[i]>'4'){
            int x = s[i] - '0';
            x = 9 - x;
            s[i] = (x + '0');
        }
    }
    if(s[0] == '0')s[0] = t;
    cout<<s<<endl;
}