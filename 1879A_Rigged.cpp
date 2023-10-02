#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    lli n;cin>>n;
    pair<lli,lli>s[n];
    for (lli i = 0; i < n; i++)
    {
        cin>>s[i].first>>s[i].second;
    }
    
    int k = 1;
    for (int i = 1; i < n; i++)
    {
        if(s[0].second<=s[i].second && s[0].first<=s[i].first){
            cout<<-1<<endl;
            k = 0;
            break;
        }
    }
    if(k)cout<<s[0].first<<endl;
    
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