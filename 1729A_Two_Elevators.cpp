#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

int main()
{
    Limon();
    int _; cin>>_;
    while (_--)
    {
    
        int a, b, c; cin>>a>>b>>c;
        if(b>c){ 
            if(a<b)cout<<1<<endl;
            else if(a==b)cout<<3<<endl;
            else cout<<2<<endl;
        }
        else{
            if(a < (c+c-b))cout<<1<<endl;
            else if(a == (c+c-b))cout<<3<<endl;
            else cout<<2<<endl;
        }
    }
}