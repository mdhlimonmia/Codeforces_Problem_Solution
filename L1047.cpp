#include <bits/stdc++.h>
using namespace std;
// #define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int


int main()
{
    Limon();
    string s; cin>>s;
    string st;
        for(auto u:s){
            if(!st.empty() && st.back() == u)st.pop_back();
            else st.push_back(u);
        }
        cout<<st<<endl; 
}