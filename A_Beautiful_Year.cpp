#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define lli long long int

int main()
{
    int n;cin>>n;
    n++;
    int k = 1;
    while (k)
    {
        k = 0;
        string s = to_string(n);
        sort(s.begin(),s.end());
        for (int i = 1; i < 4; i++)
        {
            if(s[i] == s[i-1]){
                k = 1;
                n++;
                break;
            }
        }
        
    }
    cout<<n<<endl;
    
}