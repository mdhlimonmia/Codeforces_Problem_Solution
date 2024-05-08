#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(int t){
    string s,p; cin>>s>>p;
    int n,m;
    n = s.size(), m = p.size();
    lli ans = 0;
    //given thant The strings will contain only the first 10 lowercase English letters.
    for(char i = 'a'; i<='j'; i++){
        //partial sum for a,b,c....j(total 1 to 10 small char)
        vector<int>sum(n+1);
        for (int j = 1; j <= n; j++)
        {
            //if(i == s[j-1]) then 1 otherwise 0;
            //s = abidafgaij for i = a: 1 0 0 0 1 0 0 1 0 0
            sum[j] = sum[j-1] + (s[j-1] == i);
        }
       // cout<<"Sum of: "<<i<<endl;
       // for(auto u:sum)cout<<u<<" ";
       // cout<<endl;
       
        for (int j = 0; j < m; j++)
        {
            if(p[j] == i){
                int x,y;
                x = j, y =n - (m-j-1);
                //x++,y++;
               // cout<<i<<" "<<x<<" "<<y<<endl;
                ans += sum[y] - sum[x];
               // cout<<ans<<endl;
            }
        }
        
    }
    cout<<"Case "<<t<<": "<<ans<<endl;
}

int main()
{
    Limon();

     int _;cin>>_;
     for(int t = 1; t<=_; t++)
     {
       solve(t);
     }
}