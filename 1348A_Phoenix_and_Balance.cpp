#include<bits/stdc++.h>
using namespace std;

int sum(int n, int a ){
    
    int s = a*(pow(2,n)-1);
    // cout<<s<<endl;
    return s;
}

int main(){
   int _;cin>>_;
   while (_--)
   {
     int n; cin>>n;
    int split = n/2;

    int d1 = sum(split-1,2) + pow(2,n);

    int d2 = sum(n, 2);
    cout<<d1 - (d2 - d1)<<endl;
   }
   

}