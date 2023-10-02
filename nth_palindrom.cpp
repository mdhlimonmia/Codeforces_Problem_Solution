//Print 0 to nth Palindrome number  
#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

bool pld(string s){
    int lz = s.size();
    for (int i = 0, j = lz-1; i <j ; i++, j--)
    {
        if(s[i] != s[j])return 0;
    }
    
    return 1;
}

void solve(){
    int n;cin>>n;
    for (int i = 0; n>0; i++)
    {
        string s = to_string(i);
        if(pld(s)){
            cout<<i<<" ";
            n--;
        }
    }
    
}

int main()
{
    Limon();

	solve();    
}