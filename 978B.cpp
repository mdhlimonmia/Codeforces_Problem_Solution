#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n;cin>>n;
    string s; cin>>s;
    int k = 1, t = 0;
    for(int i = 1; i<n; i++){
        if(s[i] == s[i-1] && s[i] == 'x'){
            k++;
            if(k == 3){
                t++;
                k--;
            }
        }
        else{
            k = 1;
        }
    }
    cout<<t<<endl;
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