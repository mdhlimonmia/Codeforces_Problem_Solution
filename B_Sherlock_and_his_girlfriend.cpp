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

int const mx = 1000000;
bitset<mx> isPrime;
vector<int>primelist;
void primeGen ( int n )
{
    int sq = sqrt(n);
    for ( int i = 2; i <= sq; i ++ ) {
        if(isPrime[i] == 0) { //isPrime[x] == 0 is prime number.
            //primelist.push_back(i);
            for ( int j = i*i; j <= n; j += i ) {
                isPrime[j] = 1;
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



int main() {
    Limon();
    int n; cin>>n;
    primeGen(n+1);
    if(n<=2)cout<<"1\n";
    else cout<<"2\n";
    for(int i = 2; i<=n+1; i++){
        if(isPrime[i] == 0)cout<<"1 ";
        else cout<<"2 ";
    }
    cout<<endl;
    return 0;
}