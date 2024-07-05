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


int main() {
   Limon();
   ll n,m,t; cin>>n>>m>>t;
   ll ans = 0;
   vector<ll>a(n),b(m);
   cin>>a>>b;
//    cout<<a<<b<<endl;
   ll i=0,j=0;
   for(int k = 0; k<max(n,m),t>0; k++){
    if(i>=n){
        if(b[j]>t)break;
        t-=b[j];
        ans++;
        j++;
    }else if(j>=m){
        if(a[i]>t)break;
        t -=a[i];
        ans++;
        i++;
    }else if(a[i]<b[j]){
        if(a[i]>t)break;
        t-=a[i];
        ans++;
        i++;
    }else{
        if(b[j]>t)break;
        t -=b[j];
        ans++;
        j++;
    }
   }
   cout<<ans<<endl;
   return 0;
}