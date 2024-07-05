#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define ll long long
#define ld long double
#define dbg(args...) do {cerr << #args << ": "; faltu(args); } while(0)
void faltu() { cerr << endl; }
template <typename T, typename ...hello> void faltu(T arg, const hello&... rest) { cerr << arg << ' '; faltu(rest...); }
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl


#define lzero(x) __builtin_clzll(x)

template <typename T> // cin >> vector<T>
istream &operator>>(istream &istream, vector<T> &v)
{
   for (auto &it : v)
       cin >> it;
   return istream;
}
template <typename T> // cout << vector<T>
ostream &operator<<(ostream &ostream, const vector<T> &c)
{
   for (auto &it : c)
       cout << it << " ";
   return ostream;
}

int const mx = 10000000;
bitset<mx> isPrime;
vector<int>primelist;
void primeGen ( int n )
{
    isPrime.set(); // Set all bits to 1
    isPrime[0] = isPrime[1] = 0; // 0 and 1 are not prime numbers
    int sq = sqrt(n);
    for ( int i = 2; i <= sq; i ++ ) {
        if(isPrime[i]) { //isPrime[x] == 1 is prime number.
            //primelist.push_back(i);
            for ( int j = i*i; j <= n; j += i ) {
                isPrime[j] = 0;
            }
        }
    }
}

bool checkPrime(ll n)
{
    if (n <= 1)
    return false;
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0)
            return false;
    }
    return true;
}

double fourthRoot(double n){
    return pow(n, 1.0/4.0);
}

vector<ll>mp(mx);

int main() {
    Limon();
    primeGen(mx);
    ll l = sqrt(mx), k = fourthRoot(mx);
   
    for(ll i = 1; i<=l; i++){
        for(ll j = 1; j<=k; j++){
            ll x = ((i*i) + (j*j*j*j));
            if(x <=mx && isPrime[x])mp[x] = 1;
        }
    }
    for(int i = 1; i<mx; i++)mp[i] += mp[i-1];

    int _; cin >> _;
    for(int i = 1; i <= _; i++) {
         ll n;
        cin >> n;
        cout<<mp[n]<<endl;
    }
    return 0;
}