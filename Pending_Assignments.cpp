#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int n;cin>>n;
	while(n--){
    	int x,y,z;
    	cin>>x>>y>>z;
    	int t = x*y, q = z*24*60;
    	if(t<=q)cout<<"YES\n";
    	else cout<<"NO\n";

	}
	return 0;
}
