#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int main()
{
    Limon();

    int n;cin>>n;
    int x,five=0;
    string s;
    for (int i = 0; i < n; i++)
    {
        cin>>x;
        if(x == 0)s+='0';
        else five++;
    }
    if(s.size() == 0)cout<<-1<<endl;
    else if(five<9)cout<<0<<endl;
    else{
        for (int i = 0; i < five - five%9; i++)
        {
            s = '5'+s;
        }
        cout<<s<<endl;
    }

}