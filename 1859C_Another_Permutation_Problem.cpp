#include<bits/stdc++.h>
using namespace std;

int permutation(int n){
    int sum = 0;
    for(int i =1; i<=n; i++){
        sum += i*i;
    }
    return sum;
}

int main(){
    int n;
    cin>>n;
    int k = ceil(n/2.0);
    int sum1 = permutation(k);
    // cout<<sum;
    int x = n, sum2 = 0 ;
    for(int i = k+1; i<=k+n/4; i++){
        sum2 += i*x;
        x--;
    }
    int sum = sum1 + sum2*2;
    // if((n-k)%2 == 0)sum -=(k+1+k/2)*(k+k/2);
   cout<<sum<<endl;
}