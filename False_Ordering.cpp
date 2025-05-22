#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int x[1006];
vector<pair<int,int>>v;

void n_of_div(){
    for(int i = 1; i<=1000; i++){
        for(int j = i; j<=1000; j+=i){
            x[j]++;
        }
        v.push_back({x[i],-i});
    }
}

int main()
{
    Limon();
    n_of_div();
    sort(v.begin(),v.end());
    int _;cin>>_;
    for (int t = 1; t<=_; t++)
    {
        int n; cin>>n;
        cout<<"Case "<<t<<": "<<(v[n-1].second *-1)<<endl;
    }
}