#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int main() {
    int x; cin >> x;
    int ans = 0;
    while(x){
        if(x%2 != 0)ans++;
        x/=2;
    }
    cout<<ans<<endl;
    return 0;
}