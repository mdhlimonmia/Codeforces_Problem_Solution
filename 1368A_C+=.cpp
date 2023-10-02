#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    lli a,b,n;cin>>a>>b>>n;
    lli k = 0,sum = 0;
    while(sum<=n){
        if(a<b){
            a+=b;
            k++;
            sum = a;
        }
      else{
            b+=a;
            k++;
            sum = b;
        }
        if(sum>n)break;
    }
    cout<<k<<endl;
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