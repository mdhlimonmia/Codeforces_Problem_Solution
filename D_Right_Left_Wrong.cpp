#include<bits/stdc++.h>
using namespace std;

int main(){
    int t; cin>>t;
    while (t--)
    {
        int n; cin>>n;
        vector<long long>v(n+1);
        vector<char>s(n+1);
        for(int i = 1; i<=n; i++)cin>>v[i];
        for(int i = 1; i<=n; i++)cin>>s[i];
        for(int i = 1; i<=n; i++){
            v[i] += v[i-1];
        }
        long long ans = 0, i = 1, j = n;
        while(i<j){
            while(s[i] != 'L' && i<=j) i++;
            while(s[j] != 'R' && j>=i) j--;
            if(i<j && s[i] == 'L' && s[j] == 'R'){
                ans += (v[j]-v[i-1]);
                i++, j--;
            } 
        }
        cout<<ans<<endl;
    }
    

}