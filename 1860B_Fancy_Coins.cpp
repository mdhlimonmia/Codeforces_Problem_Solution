#include<bits/stdc++.h>
using namespace std;
// #define Limon() iso_base
int main(){
    int m, k, a1, ak;
    cin>>m>>k>>a1>>ak;
    if( (m/k) <= ak){
        if(m%k <= a1) cout<<0<<endl;
        else cout<<(m%k)-a1<<endl;
    }else{
        int t = (m/k) - ak;
        int t2 = (t * k) + m%k;
        if(t2 <= a1) cout<<0<<endl;
        else{
            int t3 = t2 - a1;
            int t4 = t3/k;
            int t5 = t2%k;
            cout<<(t4+t5)<<endl;
        }
    }
}