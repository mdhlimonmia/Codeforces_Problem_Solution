#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int const mx = 1e7+123;
vector<char>isPrime(mx,false);
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

    int lim = 1e7;
    primeGen(lim);
    lli x,y,k=0; cin>>x>>y;
    vector<lli>ans(y-x+1);
    for(lli i = x; i<=y;i++){
        ans[k]=i;
        k++;
    }

    for(auto p:primes){

        lli t = ceil(x/(p*1.0));
        for(lli i = p*t; i<=y; i+=p){
                ans[i-x]/=p;
                ans[i-x] *= (p-1);
        }
    }

    for(lli i = 0; i<k; i++){
        if(ans[i]>lim && ans[i] == x+i)cout<<ans[i]-1<<endl;
        else cout<<ans[i]<<endl;
    }
}