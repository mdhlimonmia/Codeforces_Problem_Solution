#include<bits/stdc++.h>
using namespace std;
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

// #define endl '\n'

int main(){
    Limon();

    int _; cin>>_;
    while (_--)
    {
    int n; cin>>n>>ws;
    string s; cin>>s;

    // for(int i = n; i<n; i++){
    //     // cout<< s[i] - '0'<<" ";
    //     if(s[i] != '0' && s[i+2] == '0' && s[i+3] != '0' && i+3 < n){
    //         int p = (s[i] - '0') *10 + (s[i+1] - '0') - 1; 
    //         char a = 'a' + p;
    //         cout<<a;
    //         i += 2;
    //     }
    //     else if(s[i] != '0' && s[i+2] == '0' && i+3 == n ){
    //         int p = (s[i] - '0') *10 + (s[i+1] - '0') - 1; 
    //         char a = 'a' + p;
    //         cout<<a;
    //         i += 2;
    //     }
    //     else if(s[i] != '0') {
    //         int p = (s[i] - '0') -1;
    //         char a = 'a' + p;
    //         cout<<a;
    //     }
    // }
    string result;
    for (int i = n-1; i >= 0; i--)
    {
        if(s[i] == '0'){
            int p = (s[i-2] - '0') * 10 + (s[i-1] - '0') - 1;
            char a = 'a'+p;
            result += a;
            i -= 2;
        }
        else{
            int p = s[i] - '0' -1;
            char a = 'a' + p;
            result += a;
        }
    }
    reverse(result.begin(), result.end());
    cout<<result<<endl;
    s.clear();
    }
    
}