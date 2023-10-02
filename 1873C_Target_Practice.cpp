#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    int n = 100;
    char c;
    int sum = 0;
    for (int i = 1; i <= n; i++)
    {
        cin>>c;
        if(c == 'X'){
            int d = i/10, m = i%10;
            if(i%10 == 0 || d == 0 || (d == 9 && m!=0) || m == 1 ){
                sum += 1;
                continue;
            }
            if(d>5) d = 10 - d;
            if(m>5) m = 10 - m+1;
            // if(d == 0) d++;
            // if(m == 0) m++;
            if(d==m) sum += d;
            else if(d<m) sum += d+1;
            else if(d>m) sum += (d-(d-m));
            // sum += min(d,m);
        }
        
    }
    cout<<sum<<endl;
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