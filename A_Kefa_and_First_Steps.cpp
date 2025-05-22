#include<bits/stdc++.h>
using namespace std;

int n;
int main(){
    cin>>n;
    int cnt = 0, c = 0;
    int a[n];
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for(int i=0;i<n;i++){
        if(a[i]<a[i-1]){
            c=1;
        }
        else{
            c++;
        }
        cnt=max(cnt,c);
    }
    cout<<cnt<<endl;
}