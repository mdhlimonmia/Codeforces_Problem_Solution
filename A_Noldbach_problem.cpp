#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int const mx = 1e3+123;
vector<char>isPrimes(mx);
vector<int>primes;

void primeGen(int n){
    for(int i = 2; i*i<=n; i++){
        if(!isPrimes[i]){
            for(int j = i*i; j<=n; j+=i) isPrimes[j] = 1;
        }
    }
    primes.push_back(2);
    for(int i = 3; i<=n; i+=2){
        if(!isPrimes[i])primes.push_back(i);
    }
}

int main()
{
    Limon();
    int n,k; cin>>n>>k;
    primeGen(n);
    int x = n;
    for(auto p:primes){
        // cout<<p<<" "<<" ";
        int t = x+p+1;
        if(t<=n && !isPrimes[t])k--;
        x = p;
    }
    // cout<<k<<endl;
    if(k <= 0)cout<<"YES\n";
    else cout<<"NO\n";
}