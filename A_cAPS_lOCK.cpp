#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int main()
{
    Limon();

    char c; cin>>c;
    string s,t; cin>>s;
    int k = 0;
    for(auto u:s){
        if(iswlower(u)){
            k = 1;
            break;
        }
    }
    if(k){
        s = c+s;
        cout<<s<<endl;
    }
    else{
        if(islower(c)) c= toupper(c);
        else c = tolower(c);
        for(int i = 0; i<s.size(); i++){
            s[i] = tolower(s[i]);
        }
        s = c+s;
        cout<<s<<endl;
    }
}