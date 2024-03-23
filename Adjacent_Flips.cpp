#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int k = 0;
    for (int i = 1; i < n; i++)
    {
        if(s[i] == s[i-1]){
            k = 0;
            i++;
        }
        else{ 
            k++;
            // cout<<k<<endl;
        }
        if(k>1){
            cout<<"No\n";
            return;
        }
    }
    cout<<"Yes\n";
    
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