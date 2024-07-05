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
   ll n,arr[3]; cin >> arr[0]>>arr[1]>>arr[2]>>n;
   if(arr[0]*arr[1]*arr[2]<n){
    cout<<0<<endl;
    return;
   }
   ll t = cbrt(n);
   ll p,q,r;
   if(t*t*t == n && t<=arr[0] && t<=arr[1] && t<=arr[2]){
    ll ans = (arr[0]-t+1)*(arr[1]-t+1)*(arr[2]-t+1);
    cout<<ans<<endl;
   }else{
     p = q = r = t;
     if(isPrime(n)){
        p=q=1;
        r = n;
     }else{
        while(p*q*r != n){
            while (n%p !=0 || p == 1)
            {
                p++;
            }
            bool b = 1;
            while(n%(p*q)!=0 && b){
                if(n/p*q <1){
                    while(n%(p*q)!=0) q--;
                    b = 0;
                }else q++;
            }
            r = n/(p*q);
     }
     }
    //  dbg(p,q,r);
     ll tem[3];
     tem[0] = p, tem[1] = q, tem[2] = r;
     sort(arr,arr+3);
     sort(tem,tem+3);
     ll ans = (arr[0]-tem[0]+1)*(arr[1]-tem[1]+1)*(arr[2]-tem[2]+1);
     if(ans<0)cout<<"0\n";
     else cout<<ans<<endl;
   }
}

int main() {
//    Limon();
   int _; cin >> _;
   for(int i = 1; i <= _; i++) {
       solve();
   }
   return 0;
}