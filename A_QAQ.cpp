#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int main()
{
    Limon();

    string s; cin>>s;
    int sz = s.size();
    int q = count(s.begin(), s.end(), 'Q');
    int a = count(s.begin(), s.end(), 'A');
    int qn = 0, ans = 0;
    for (int i = 0; i < sz; i++)
    {
        if(s[i] == 'Q') qn++; 
        if(s[i] == 'A' && qn!=0 && qn !=q){
            ans += qn * abs(q - qn);
        }
    }
    cout<<ans<<endl;
    
}