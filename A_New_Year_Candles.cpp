#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define ld long double


int main(){
    lli a,b;
    cin>>a>>b;
    lli ans = a;
    while(a>=b){
        ans += a/b;
        a = (a/b)+a%b;
    }
    cout<<ans<<endl;
}