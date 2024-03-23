#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int main()
{
    Limon();

    string s;
    cin>>s;
    int lz = s.size();
    int k = 0;
    for (int i = 0; i < lz-2; i++)
    {
        if(s[i] == 'C' && s[i+1] == 'O' && s[i+2] == 'V'){
            k = 1;
            break;
        }
    }
    if(k)cout<<"Veikur!\n";
    else cout<<"Ekki veikur!\n";
}