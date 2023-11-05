#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"

bool ist(int t,int n){
    int p = 2;
    if(t == 1 || t==2)return 1;
    for (int i = 0; p<n; i++)
    {
        p = p*2;
        if(p == t)return 1;
    }
    return 0; 
}

void solve(){
    int n;cin>>n;
    int arr[n];
    for (int i = 1; i <= n; i++)
    {
        cin>>arr[i];
    }

    for (int i = 2; i <=n ; i++)
    {
        if(arr[i] < arr[i-1]){
            if(!ist(i-1,n)){
                cn;
                return;
            }
        }
    }
    cy;
}

int main()
{
    Limon();

    int _;cin>>_;
    while (_--)
    {
       solve();
    }
}