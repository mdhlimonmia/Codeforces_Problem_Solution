#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define ld long double

void solve(){
    lli n,k; cin >> n >> k;
    if(n==1){
        cout<<k<<endl;
        return;
    }
    lli t = k, number_of_Bit = 0;
    while(t){
        number_of_Bit++;
        t = t>>1;
        // cout<<t<<endl;
    }
    // cout<<"Bit: "<<number_of_Bit<<endl;
    lli x,y;
    x = pow(2,number_of_Bit-1)-1;
    y = k-x;
    cout<<x<<" "<<y<<" ";
    for(int i = 3; i<=n; i++)cout<<"0 ";
    cout<<endl; 

}

int main()
{
    // Limon();
    int _; cin >> _;
    for(int i = 1; i<=_;i++) {
        solve();
    }
    return 0;
}