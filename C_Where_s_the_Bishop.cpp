#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    char arr[8][8];
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            cin>>arr[i][j];
        }
    }
    int a,b;
    for (int i = 0; i < 8; i++)
    {
        for (int j = 0; j < 8; j++)
        {
            if(arr[i][j] == '#'){
                if(arr[i+1][j+1] == '#' && arr[i+1][j-1] == '#' && arr[i-1][j+1] == '#' && arr[i-1][j-1] == '#'){
                    a = i+1;
                    b = j+1;
                    break;
                }
            }
        }
        
    }
    cout<<a<<" "<<b<<endl;
    
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