#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    string n,m;cin>>n>>m;
    reverse(n.begin(),n.end());
    reverse(m.begin(),m.end());
    int x = stoi(n);
    int y = stoi(m);
    int t = x+y;
    string s = to_string(t), ans = "";
    bool k = 0;
    for(int i = s.length() - 1; i>=0; i--){
        if(s[i] !='0')k=1;
        if(k)ans+=s[i];
    }

    cout<<ans<<endl;

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