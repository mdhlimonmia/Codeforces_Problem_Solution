#include<bits/stdc++.h>
using namespace std;

int main(){
    int n; cin>>n;
    if(n<2) cout<<-1<<endl;
    else{
        for (int i = 1; i <= n; i++)
        {
            cout<<2*i<<" "<<(2*i)-1<<" ";
        }
        cout<<endl;
    }
    
    
}