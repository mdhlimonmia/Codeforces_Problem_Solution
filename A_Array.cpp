#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define ld long double

void solve(){
    int n,x; cin >> n;
    vector<int>v1,v2,v3;
    for(int i = 0; i<n; i++){
        cin>>x;
        if(x==0)v3.push_back(x);
        else if(x<0) v1.push_back(x);
        else v2.push_back(x);
    }
    if(v1.size()%2 == 0){
        int l = v1.size();
        v3.push_back(v1[l-1]);
        v1.erase(v1.end()-1);
    }
    if(v2.size() == 0){
        int l = v1.size();
        v2.push_back(v1[l-1]);
        v2.push_back(v1[l-2]);
        v1.erase(v1.end()-1);
        v1.erase(v1.end()-1);
    }

    cout<<v1.size()<<" ";
    for(auto u:v1)cout<<u<<" ";
    cout<<endl;
    cout<<v2.size()<<" ";
    for(auto u:v2)cout<<u<<" ";
    cout<<endl;
    cout<<v3.size()<<" ";
    for(auto u:v3)cout<<u<<" ";
    cout<<endl;
}

int main()
{
    Limon();
    solve();
    return 0;
}