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

bool isPrime(ll n)
{
   if (n <= 1)
   return false;
   for (int i = 2; i * i <= n; i++) {
       if (n % i == 0)
           return false;
   }
   return true;
}

void solve() {
   ll n,m,x,y,z;
   cin >> n;
}

const ll mx = 1e8;
bitset<mx>arr;

int main() {
    Limon();
    ll t = sqrt(mx);
    vector<ll>ans;
    for(ll i = 3; i<=t; i+=2){
        if(!arr[i]){
            for(ll j = i*i; j<=mx; j+=i)arr[j] = 1;
        }
    }
    ans.push_back(2);
    for(ll i = 3; i<=mx; i+=2){
        if(!arr[i])ans.push_back(i);
    }

    for(int i = 0; i<ans.size(); i+=100)cout<<ans[i]<<endl;
    return 0;
}