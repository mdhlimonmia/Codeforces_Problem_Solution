#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    string s="RICK";
    int sz = s.size();
    for (int i = 0; i < sz; i++)
    {
        cout<<s[i] - 'A'+1<<" ";
    }
    cout<<endl;
}

int main()
{
    Limon();

     
       solve();
     
}