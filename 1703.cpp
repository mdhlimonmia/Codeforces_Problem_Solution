#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
void solve(){
    lli n;cin>>n;
    lli arr[n];
    for (lli i = 0; i < n; i++)
    {
        cin>>arr[i];
    }
    lli x;
    for (lli i = 0; i < n; i++)
    {
        char c;
        cin>>x;
        for (lli j = 0; j < x; j++)
        {
            cin>>c;
            if(c=='U'){
                if(arr[i] == 0)arr[i] = 9;
                else arr[i]--;
            }
            else{
                if(arr[i] == 9) arr[i] = 0;
                else arr[i]++;
            }
        }
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    
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