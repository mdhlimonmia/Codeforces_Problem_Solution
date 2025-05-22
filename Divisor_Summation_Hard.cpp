#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

lli const mx = 1e8+123;
bitset<mx>isPrime;
vector<int>primes;

void primeGen(lli n){
    for(int i = 3; i<=n; i+=2)isPrime[i] = 1;
    lli l = sqrt(n);
    for(lli i = 3; i<=l; i+=2){
        if(isPrime[i]){
            for(lli j = i*i; j<=n; j+=i) isPrime[j] = 0;
        }
    }
    primes.push_back(2);
    for(int i = 3; i<=n; i+=2){
        if(isPrime[i]) primes.push_back(i);
    }
}

void solve(){
    lli n;cin>>n;
    lli ans = 1, n1 = n;
    for(auto p:primes){
        if(1LL*p*p>n)break;
        if(n%p == 0){
            lli k = 1, t = 1;
            while(n%p == 0){
                k*=p;
                t += k;
                n/=p;
            }
            ans *=t;
        }
    }
    if(n>1) ans *= (1+n);
    cout<<ans - n1<<endl;
}

int main()
{
    Limon();
    lli lim = 1e8;
    primeGen(lim);
    int _;cin>>_;
    while (_--)
    {
        solve();
    }
}