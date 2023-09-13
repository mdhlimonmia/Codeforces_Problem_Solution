#include<bits/stdc++.h>
using namespace std;

int main(){
    int _; cin>>_;
    while (_--)
    {
        int n; cin>>n;
    int w, q, max = 0, ans;
    for(int i =1; i<=n; i++)
    {
        cin>>w>>q;
        if(q>max && w<=10){
            max = q;
            ans = i;
        }
    }
    cout<<ans<<endl;
    }
    
}