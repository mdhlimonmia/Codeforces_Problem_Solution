#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n,k;cin>>n>>k;
    char s[n];
    map<char,int>m;
    for (int i = 0; i < n; i++)
    {
            cin>>s[i];
            m[s[i]]++;
    }
    int nm = m['B'];
    if(nm == k)cout<<0<<endl;
    else{
        cout<<1<<endl;
        if(nm<k){
            // cout<<k-nm<<" "<<'B'<<endl;
            int t = k-nm, i;
            for (i = 0; t; i++)
            {
                if(s[i] == 'A')t--;
            }
            cout<<i<<" "<<'B'<<endl;
        }else{
            int t = nm-k, i;
            for (i = 0; t; i++)
            {
                if(s[i] == 'B')t--;
            }
            cout<<i<<" "<<'A'<<endl;
        }
    }
    

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