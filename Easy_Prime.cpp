#include<iostream>
#include<algorithm>
#include<string>
#include<vector>
#include<cmath>

using namespace std;

int isPrime(int x){
    if(x == 2) return 1;
    else if(x%2 == 0 || x<2) return 0;
    for(int i = 3;  i <= sqrt(x); i++){
        if(x%i == 0)return 0;
    }
    return 1;
}

int main(){
    int n; cin>>n;
    vector<int>v(n+1);
    for(int i = 1; i<=n; i++)cin>>v[i];
    for(int i = 1; i<=n; i++){
        v[i] = isPrime(v[i]);
    }
    int q; cin>>q;
    while (q--)
    {
        int op,x,y; cin>>op>>x>>y;
        if(op == 1){
            int ans = 0;
            for(int i = x; i<=y; i++)ans += v[i];
            cout<<ans<<endl;
        }else{
            v[x] = isPrime(y);
        }
    }

}