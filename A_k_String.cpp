#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

void solve(){
    int n;cin>>n;
    string s;cin>>s;
    int sz = s.size();
    map<char,int>m;
    for (int i = 0; i < sz; i++)
    {
        m[s[i]]++;
    }
    bool k = 0;
    string ans;
    for(auto u:m){
        if(u.second % n !=0){
            k = 1;
            break;
        }
        int cnt = u.second/n;
        while (cnt--) ans += u.first;
    }
    if(k){
        cout<<-1<<endl;
        return;
    }
    else{
        while(n--)cout<<ans;
        cout<<endl;
    }
}

int main()
{
    Limon();
    solve();
   
}