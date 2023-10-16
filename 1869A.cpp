#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
#define cy cout<<"YES\n"
#define cn cout<<"NO\n"
void solve(){
    int n;cin>>n;
	int x;
	for(int i=0; i<n; i++)cin>>x;
	if(n%2== 0){
		cout<<2<<endl;
		cout<<1<<" "<<n<<endl;
		cout<<1<<" "<<n<<endl;
	}else{
		cout<<4<<endl;
		cout<<1<<" "<<n-1<<endl;
		cout<<1<<" "<<n-1<<endl;
		cout<<n-1<<" "<<n<<endl;
		cout<<n-1<<" "<<n<<endl;
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