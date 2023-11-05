#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int

int main()
{
    Limon();

    int fibo[100000];
    fibo[0] = 0;
    fibo[1] = 1; 
    int n;cin>>n;
    int i = 2;
    map<int, int>m;
    m[0]=1;
    m[1] = 1;
    while (fibo[i]<=n)
    {
        fibo[i] = fibo[i-1]+fibo[i-2];
        m[fibo[i]]++;
        i++;

    }
    
    if(m[n])cout<<"0 0 "<<n<<endl;
    else{
        int k = 1, x = n, y = 1;
        while(!m[x] || !m[y]){
            x--;
            y++;
            if(x<y){
                k = 0;
                break;
            }
        }
        if(k)cout<<0<<" "<<x<<" "<<y<<endl;
        else cout<<"I'm too stupid to solve this problem\n";
    }
}