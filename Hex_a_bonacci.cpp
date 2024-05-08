#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
lli m = 10000007;
lli fibo[100000];
int a,b,c,d,e,f;
lli fn(int n){
    if (n == 0) return a%m;
    if (n == 1) return b%m;
    if (n == 2) return c%m;
    if (n == 3) return d%m;
    if (n == 4) return e%m;
    if (n == 5) return f%m;
    if(fibo[n] != -1) return fibo[n]%m; 
    return fibo[n] = (fn(n-1)%m + fn(n-2)%m + fn(n-3)%m + fn(n-4)%m + fn(n-5)%m + fn(n-6)%m)%m;
}

int main()
{
    Limon();

    int _;cin>>_;
    for (int t = 1; t <= _; t++)
    {
        memset(fibo,-1, sizeof(fibo));
        int n;
        cin>>a>>b>>c>>d>>e>>f>>n;
        lli ans = fn(n);
        cout<<"Case "<<t<<": "<<ans<<endl;
    }
    
    
}