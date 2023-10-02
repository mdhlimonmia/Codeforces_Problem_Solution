#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    string s;cin>>s;
    int lz = s.size(), k = 0;
    for(int i = 0,j = lz-1; i<j; i++, j--){
        if(s[i] != s[j])k++;
    }
    if(k==1)cout<<"YES"<<endl;
    else if(k==0 && lz%2 !=0)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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