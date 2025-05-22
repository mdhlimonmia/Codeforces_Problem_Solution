#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long

const int mx = 1e7+123;
bitset<mx> isPrime;
vector<int> primes;
int cntPrime[mx];

void primeGen ( int n )
{
    for ( int i = 3; i <= n; i += 2 ) isPrime[i] = 1;

    int sq = sqrt(n);
    for ( int i = 3; i <= sq; i += 2 ) {
        if(isPrime[i]) {
            for ( int j = i*i; j <= n; j += i ) {
                isPrime[j] = 0;
            }
        }
    }

    isPrime[2] = 1;
    primes.push_back(2);

    for ( int i = 3; i <= n; i += 2 ) {
        if(isPrime[i] == 1) {
            primes.push_back(i);
        }
    }
}


void solve(){
    ll n;cin>>n;
    map<ll,ll>mp;
    ll ans = 1;
    for(auto p:primes){
        if(1LL*p*p>n)break;
        if(n%p == 0){
            ll cnt = 1;
            while(n%p==0){
                cnt++;
                n/=p;
            }
            ans *= cnt;
        }
    }
    if(n>1)ans *=2;
    // ll ans = 1;
    // for(auto u:mp){
    //     cout<<u.first<<" "<<u.second<<endl;
    //     ans *=(u.second + 1);
    // }
    cout<<ans<<endl;
}

int main()
{
    Limon();
    primeGen(mx);
     int _;cin>>_;
     while (_--)
     {
       solve();
     }
}