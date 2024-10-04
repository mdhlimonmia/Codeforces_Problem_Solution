#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    vector<int>v[n];
    int x = 1;
    for(int i = 1; i<n; i+=2){
        for(int j = 0; j<n; j++)v[j].push_back(x++);
        for(int j = 0; j<n; j++)v[n-j-1].push_back(x++);
    }
    for(auto u:v){
        for(auto p:u)cout<<p<<" ";
        cout<<endl;
    }

}