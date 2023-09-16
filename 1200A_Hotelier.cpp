#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    int n;cin>>n;
    vector<int>v(10);
    string s; cin>>s;
    for (int j = 0; j < n; j++)
    {
        if(s[j] == 'L'){
            for (int i = 0; i < 10; i++)
            {
                if(v[i] == 0){
                    v[i] = 1;
                    break;
                }
            }  
        }
        else if(s[j] == 'R'){
            for (int i = 9; i >= 0; i--)
            {
                if(v[i] == 0){
                    v[i] = 1;
                    break;
                }
            }  
        }
        else{
            v[s[j] - '0'] = 0;
            // cout<<v[s[j] - '0']<<" "<<s[j]<<endl;
        }
    }
    for (int i = 0; i < 10; i++)
    {
        cout<<v[i];
    }
    
    cout<<endl;
    
}

int main()
{
    Limon();

    // int _;cin>>_;
    // while (_--)
    // {
	    solve();
    // }
    
}