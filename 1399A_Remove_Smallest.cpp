#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while (t--)
    {
        int n, arr[50];
        cin>>n;
        for(int i=0; i<n; i++){
            cin>>arr[i];
        }
        if(n==1){
            cout<<"YES"<<endl;
        }
        else{
            for(int i=0; i<n; i++){
                for(int j=i+1; j<n; j++){
                    int temp = arr[i];
                    if(arr[i]>arr[j]){
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                }
            }
            int count=0;
           for(int i=0;i<n-1;i++){
                if((arr[i+1]-arr[i]) <= 1){
                    count = i+2;
                }
                else{
                    break;
                }
            }
            if(count == n){
                cout<<"YES"<<endl;
            }else{
                cout<<"NO"<<endl;
            }
        }
        
    }
    return 0;
}