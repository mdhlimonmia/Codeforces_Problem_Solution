#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int const mx = 1e5+123;
vector<char>isPrime(mx+1,false);
vector<int>primes;

void primeGen(int n){

    for(int i = 2; i*i<=n; i++){
        if(!isPrime[i]){
            for(int j = i*i; j<=n; j+=i) isPrime[j] = true;
        }
    }
    primes.push_back(2);
    for(int i = 3;i<=n; i+=2){
        if(!isPrime[i])primes.push_back(i);
    }
}



int main()
{
    Limon();

    int n,m; cin>>n>>m;
    primeGen(n);
    // for(auto p:primes)cout<<p<<" ";
    vector<int>status(n+1);
    vector<int>active_prime(n+1);
    while(m--){
        char c;
        int k;
        cin>>c>>k;
        if(c=='+'){
            if(status[k] == 1){
                cout<<"Already on\n";
            }else{
                vector<int>primeDiv;
                int tem = k;
                //find out primes divisor
                for(auto p:primes){
                    if(p*p > tem)break;
                    if(tem % p == 0){
                        while(tem%p==0) tem/=p;
                        primeDiv.push_back(p);
                    }
                }
                if(tem>1)primeDiv.push_back(tem);
                bool f = true;
                //check co-primes
                for(auto u:primeDiv){
                    if(active_prime[u] != 0){
                        cout<<"Conflict with "<<active_prime[u]<<endl;
                        f = false;
                        break;
                    }
                }
                if(f){
                    cout<<"Success\n";
                    status[k] = 1;
                    for(auto u:primeDiv){
                        active_prime[u] = k;
                    }
                }
                
            }
        }else{
            if(status[k] == 0){
                cout<<"Already off\n";
            }else{
                cout<<"Success\n";
                status[k] = 0;
                vector<int>primeDiv;
                int tem = k;
                for(auto p:primes){
                    if(p*p > tem)break;
                    if(tem % p == 0){
                        while(tem%p==0) tem/=p;
                        primeDiv.push_back(p);
                    }
                }
                if(tem>1)primeDiv.push_back(tem);

                for(auto u:primeDiv){
                        active_prime[u] = 0;
                }
            }
        }
    }

    

}