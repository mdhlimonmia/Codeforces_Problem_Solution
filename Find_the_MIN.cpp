#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
map<int,int>m;
void solve(){
    int x,y;cin>>x;
    if(x == 1){
        cin>>y;
        m[y]++;
    }
    else{
        if(m.empty() == 1)cout<<"empty\n";
        else{
            auto ans = m.begin();
            cout<<ans->first<<endl;
            m.erase(ans->first);           
        }
    }
}

int main()
{
    Optimize();

     int _;cin>>_;
     while (_--)
     {
       solve();
     }
}