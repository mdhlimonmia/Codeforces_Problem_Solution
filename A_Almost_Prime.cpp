#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int const mx = 3e3+123;
vector<char>isPrime(mx+1,false);
vector<int>primes;
void primeGen(int n){
    for(int i = 2; i*i<=n; i++){
        if(!isPrime[i]){
            for(int j = i*i; j<=n; j+=i)isPrime[j] = true;
        }
    }
    primes.push_back(2);
    for(int i = 3; i<=n; i+=2){
        if(!isPrime[i])primes.push_back(i);
    }
}

int main()
{
    Limon();

    int n; cin>>n;
    primeGen(n);
    map<int,int>mp;
    for(auto p:primes){
        for(int i = p; i<=n; i+=p){
            mp[i]++;
        }
    }
    int ans = 0;
    for(auto u:mp){
        if(u.second == 2)ans++;
    }
    cout<<ans<<endl;
}