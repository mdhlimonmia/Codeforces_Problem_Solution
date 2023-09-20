#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);

void solve(){
    int n,k,x;cin>>n>>k>>x;

    if(k>n || (k>x && (k-1)!=x))cout<<-1<<endl;
    else{
        int sum = 0;
        for (int i = 0; i < k; i++)
        {
            sum += i;
            n--;
            // cout<<sum<<" "<<n<<endl;
        }
        if(k==x)x--;
        while (n--)
        {
            sum += x;
        }
        cout<<sum<<endl;
    }
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