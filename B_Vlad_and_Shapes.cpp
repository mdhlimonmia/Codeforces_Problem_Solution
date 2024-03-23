#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    string s[n];
    for (int i = 0; i < n; i++)
    {
        cin>>s[i];
    }
    int t = 0;
    bool b = true, on = false;
    for (int i = 0; i < n; i++)
    {
        int k = 0;
        for (int j = 0; j < n; j++)
        {
            if(s[i][j] == '1') {
                k++;
                
            }
        }
        if(i != 0 && k !=0 && on && t!=k){
            b = false;
            break;
        }
        if(k != 0)on = true;

        t = k;
    }
    if(b) cout<<"SQUARE\n";
    else cout<<"TRIANGLE\n";
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