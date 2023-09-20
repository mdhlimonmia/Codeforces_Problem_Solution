#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    int n;cin>>n;
    string s;
    cin>>s;
    int k = n;
    for(int i = 0, j = n-1; i<j; i++, j--){
        if(s[i] != s[j])k -= 2;
        else break;
    }
    cout<<k<<endl;
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