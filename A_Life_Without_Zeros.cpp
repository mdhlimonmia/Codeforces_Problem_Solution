#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,m;cin>>n>>m;
    int x = 0,y=0, c = n+m;
    string a = to_string(n), b = to_string(m), k = to_string(c);
    for(int i = 0; i<a.size(); i++){
        if(a[i]!='0'){
            x*=10;
            x+=(a[i]-'0');
        }
    }
    for(int i = 0; i<b.size(); i++){
        if(b[i]!='0'){
            y*=10;
            y+=(b[i]-'0');
        }
    }
    int p = 0;
    for(int i = 0; i<k.size(); i++){
        if(k[i]!='0'){
            p*=10;
            p+=(k[i]-'0');
        }
    }
    // cout<<x<<" "<<y<<" "<<p<<endl;
    if(x+y == p)cout<<"yes\n";
    else cout<<"no\n";
}