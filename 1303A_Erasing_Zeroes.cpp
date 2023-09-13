#include<bits/stdc++.h>
using namespace std;

#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// #define endl '\n'

int main(){
    Limon();
    
    int _; cin>>_;
    while (_--)
    {
        
    string arr;
    cin>>arr;

    int n = arr.size();

    int result = 0;
    for (int i = 0; i < n; i++)
    {
        // cout<<"arr[i]"<<i <<" "<< arr[i]<<endl;
        if(arr[i] == '1' && arr[i+1] == '0'){
            i++;
            int result1 = 0;
            while (arr[i] != '1')
            {
            // cout<<"enter"<<endl;
                result1++;
                i++;
                if(i > n) break;
            }
            if(i <= n){
                result += result1;
                i--;
            }
        }
    }
    cout<<result<<endl;
    }
    
}