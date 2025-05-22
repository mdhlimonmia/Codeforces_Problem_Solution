#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int const mx = 1e6+123;
vector<char>isPrime(mx,false);
vector<int>primes;
void primeGen(int n){
    for(int i = 2; i*i<=n; i++){
        if(!isPrime[i]){
            for(int j = i*i; j<=n; j+=i) isPrime[j] = true;
        }
    }
    primes.push_back(2);
    for(int i = 3; i<=n; i+=2){
        if(!isPrime[i]) primes.push_back(i);
    }
}

void solve(){
    int n;cin>>n;
    int ans = n;
    for(auto p:primes){
        // cout<<p<<" ";
        if(p*p>n)break;
        if(n%p==0){
            while(n%p==0){
                n/=p;
            }
            ans /= p;
            ans *= (p-1);
        }
    }
    if(n>1){
        // cout<<"n "<<n<<endl;
        ans /=n;
        ans *=(n-1);
    }
    cout<<ans<<endl;
}

int main()
{
    Limon();
    int lim = 1e6;
    primeGen(lim);
    int _;cin>>_;
    while (_--)
    {
    solve();
    }
}