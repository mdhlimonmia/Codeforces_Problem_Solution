#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
int solve(){
    string s; char c;
    cin>>s>>c;
    int lx = s.size();
    for (int i = 0; i < lx; i++)
    {
        if(s[i] == c && i%2 == 0)return 1;
    }
    return 0;
}

int main()
{
    Limon();

    int _;cin>>_;
    while (_--)
    {
	   if(solve()) cout<<"YES"<<endl;
       else cout<<"NO"<<endl;
    }
    
}