#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

void solve(){
    string s; cin>>s;
    int k = 0, n = s.size();
    bool f = false;
    for (int i = 1; i < n; i++)
    {
        if(s[i] != s[i-1]){
            if(s[i-1] == '1')f = true;
            k++;
        }
    }
    // if(s[n-2] == '0' && s[n-1] == '1' && n>2 && k>)
    if(k == 1 && f)k++;
    cout<<max(1,k)<<endl;
}

int main()
{
    Limon();
    int _; cin >> _;
    while (_--) {
        solve();
    }
    return 0;
}