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
        if(isPrime[i] == 0) {
            primelist.push_back(i);
            for ( int j = i*i; j <= n; j += i ) {
                isPrime[j] = 1;
            }
        }
    }
}



int main() {
   Limon();
   primeGen(mx);
   int n;
   while (cin>>n)
   {
       if(n==0)break;
       for(auto u:primelist){
          int a = u, b = n-u; 
          if(isPrime[b]==0 && b<=n){
            cout<<n<<" = "<<a<<" + "<<b<<endl;
            break;
          }
       }
   }
   
   return 0;
}