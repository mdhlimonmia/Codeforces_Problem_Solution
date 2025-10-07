#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long int

const int mx = 1e6+123;
bitset<mx> isPrime;
vector<int> primes;
vector<ll>ans(mx);
bool have0(int n){
    bool f = 1;
    ll x = 0, y = 1;
    while(n>0){
        x+=(y*(n%10));
        if((isPrime[x] == 0) || n%10 == 0)f = 0;
        y*=10;
        n/=10;
    }
    // cout<<x<<" "<<n<<endl;
    return f;
}
void primeGen(int n) {
    for (int i = 3; i <= n; i += 2) isPrime[i] = 1;

    int sq = sqrt(n);
    for (int i = 3; i <= sq; i += 2) {
        if (isPrime[i]) {
            for (int j = i * i; j <= n; j += i) {
                isPrime[j] = 0;
            }
        }
    }

    isPrime[2] = 1;
    for (int i = 1; i <= n; i++) {
        ans[i] = ans[i-1];
        if(isPrime[i] == 1 && have0(i)==1)ans[i]++;
    }
}

void solve(){
    int n;cin>>n;
    //ll ans = lower_bound(primes.begin(), primes.end(), n+1) - primes.begin();
    cout<<ans[n]<<endl;
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