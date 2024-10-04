#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        string s; cin>>s;
        map<char,int>m;
        for(auto u:s)m[u]++;
        while(n){
            for(char c = 'a'; c<='z'; c++){
                if(m[c]>0){
                    cout<<c;
                    m[c]--;
                    n--;
                }
            }
        }
        cout<<endl;
    }
    

}