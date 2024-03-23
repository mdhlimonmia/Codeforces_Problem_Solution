#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int sound(int n,int k){
    if(n/k <= k && n%k == 0)return n/k + 1;
    else{
        if(n%k != 0) return n/k + 1 + sound(n/k+1,k); 
        return n/k + sound(n/k,k);
    }
}

int main()
{
    Limon();

    lli n,k;cin>>n>>k;
    n++;
    k += k;
    lli ans = sound(n,k);
    cout<<ans<<endl;
}