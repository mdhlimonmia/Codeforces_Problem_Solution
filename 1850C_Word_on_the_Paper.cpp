#include<bits/stdc++.h>
using namespace std;

int main(){
    int _; cin>>_;
    while (_--)
    {   char x;
        vector<char> str;
        for(int i = 0; i<64; i++){
            cin>>x;
            if(x != '.') str.push_back(x);
        }
        for(auto u:str)cout<<u;
        puts("");
    }
    
}