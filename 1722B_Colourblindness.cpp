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
    string p; cin>>p;
    int f = 1;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == 'B') s[i] = 'G';
        if(p[i] == 'B') p[i] = 'G';
        if(s[i] != p[i]){
            f = 0; 
            break;
        }
    }
        if(f) puts("YES");
        else puts("NO");
    }
    
}