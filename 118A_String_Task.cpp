#include<bits/stdc++.h>
using namespace std;
// #define Limon() iso_base
#define endl '\n'
int main(){
    string s;
    cin>>s;
    int sz = s.size();
    vector<char> result;
    for(int i = 0; i< sz; i++){
        if(s[i] <= 'Z'){
            s[i] = s[i] + 32;
        }
        if(s[i] == 97 || s[i] == 101 || s[i] == 105 || s[i] == 111 || s[i] == 117 || s[i] == 121) continue;
        else{
            result.push_back('.');
            result.push_back(s[i]);
        }
    }
    for(auto u:result) cout<<u;
    cout<<endl;
}