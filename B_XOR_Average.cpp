/*
* Titile: B_XOR_Average.cpp
* Author: Muhammad Limon Mia
* Date: 25/03/2024 23:02:50
*/
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    if(n%2 != 0){
        for(int i = 0; i<n; i++)cout<<"1 ";
        cout<<endl;
    }else{
        cout<<"1 3 ";
        for(int i = 2; i<n; i++)cout<<"2 ";
        cout<<endl;
    }
    
}

int main()
{
    Limon();

     int _;cin>>_;
     while (_--)
     {
       solve();
     }
}