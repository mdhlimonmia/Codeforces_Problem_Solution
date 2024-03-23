#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    vector<int>v(n);
    map<int,int>m;
    for (int i = 0; i < n; i++)
    {
        cin>>v[i];
        m[v[i]]++;
    }
    int x = -1;
    int sum = INT_MAX;
    for(auto u:m){
        if(x == -1){
            if(u.second>1) sum = min(sum, u.first+u.first);
            x = u.first;
        }
        else {
            sum = min(sum, x+u.first);
            x = u.first;
            if(u.second>1) sum = min(sum, u.first+u.first);
        }
    }
    cout<<sum<<endl;
}

int main()
{
    Limon();

    solve();
}