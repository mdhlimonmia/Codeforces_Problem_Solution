#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int const mx = 1e6+123;
vector<char>isPrime(mx+1, false);
vector<int>primes;
void primeGen(int n){
    for(int i = 2; i*i<=n; i++){
        if(!isPrime[i]){
            for(int j = i*i; j<=n; j+=i)isPrime[j] = true;
        }
    }
    primes.push_back(2);
    for(int i = 3; i<=n; i+=2){
        if(!isPrime[i]){
            int k = i;
            bool t = true;
            while(k>1){
                // cout<<k<<endl;
                if(k%10==0){
                    t = false;
                    break;
                }
                k/=10;
            }
            if(t)primes.push_back(i);
        }
    }
}
void solve(){
    int n;cin>>n;
    int ans = 0;
    for(auto p:primes){
        if(p>n)break;
        // cout<<p<<" ";
        ans++;
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