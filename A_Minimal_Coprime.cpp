#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    while(n--){
        long long int a, b; cin>>a>>b;
        if(a == b && a == 1)cout<<1<<endl;
        else cout<<b-a<<endl;
    }
}