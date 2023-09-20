#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    //int n;cin>>n;
    string x,y;
    cin>>x>>y;
    map<char,int> m;
    for (int i = 0; i < 26; i++)
    {
        m[x[i]] = i+1;
    }
    int result = 0;
    for (int i = 1; i < y.length(); i++)
    {
        result += abs(m[y[i]] - m[y[i-1]]);
    }
    
    cout<<result<<endl;
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