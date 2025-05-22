#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long

ll const mx = 1e7 +123;
bitset<mx>prime;
vector<ll>primeList;

void primeGen(ll n){
    prime.set();
    for(ll i = 2; i*i<=n; i++){
        if(prime[i]){
            primeList.push_back(i);
            for(ll j = i*i; j<=n; j+=i)prime[j] = 0;
        }
    }
}
vector<ll> primeFactors(ll n)
{
    vector<ll> factors;
    for ( auto p : primeList ) {
        if (1LL * p * p > n) break;
        if ( n % p == 0 ) {
            factors.push_back(p);
            while ( n % p == 0 ) {
                n /= p;
            }
        }
    }

    if(n > 1) factors.push_back(n);

    return factors;
}

int main()
{
    Limon();

    int lim = 1e7;
    primeGen(lim);

    ll n;

    while ( cin >> n ) {
        if ( n == 0 ) break;
        n = abs(n);
        vector<ll> factors = primeFactors(n);

        if(factors.size() <=1 ) cout << -1 << endl;
        else cout << factors.back() << endl;
    }

    return 0;
}