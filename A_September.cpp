#include <bits/stdc++.h>
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
#define ll long long


int main() {
    Limon();
    int ans = 0;
    for(int i = 1; i<13; i++){
        string s;cin>>s;
        if((int)s.size() == i)ans++;
    }
    cout<<ans<<endl;

    return 0;
}