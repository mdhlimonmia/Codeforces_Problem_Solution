#include<bits/stdc++.h>
using namespace std;

int main(){
    int _; cin>>_;
    while (_--)
    {
        int a,b,c;
    cin>>a>>b>>c;
    if(a>b){
        cout<<"First"<<endl;
    }
    else if(b>a){
        cout<<"Second"<<endl;
    }
    else if(a == b && c%2 == 0){
        cout<<"Second"<<endl;
    }
    else cout<<"First"<<endl;
    }
    
}