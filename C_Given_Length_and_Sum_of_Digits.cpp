#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define all(x) (x).begin(), (x).end()
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define file() freopen("input.txt","r",stdin);freopen("output.txt","w",stdout);
#define yes cout<<"YES"<<endl
#define no cout<<"NO"<<endl
#define F first
#define S second
#define pb push_back
#define vi vector<int>
#define vl vector<long long>
#define pii pair<int,int>
#define pll pair<long long, long long>
#define mpi map<int,int>
#define mpl map<long long, long long>
#define inf 1e18

typedef long long ll;
typedef double dd;
int dx[] = {1,-1,0,0,1,-1,-1,1};
int dy[] = {0,0,1,-1,1,-1,1,-1};

void solve(){
    //ll n;cin>>n;
}

int main()
{
    Limon();

    int n,s;
    cin>>n>>s;
    if(n*9<s || (s==0 && n!=1))cout<<"-1 -1\n";
    else if(n==1) cout<<s<<" "<<s<<endl;
    else{
        string s1 = "",s2 = "";
        int tem1,tem2; tem1 = tem2 = s;
        for(int i = n; i>0; i--){
            for(int j = 0; j<10; j++){
                if(tem1-j> (i-1)*9 || (j == 0 && i == n))continue;
                char c = j+'0';
                s1 +=c;
                tem1 -=j;
                break;
            }
            for(int j = 9; j>=0; j--){
                if(tem2<j)continue;
                char c = j+'0';
                s2 +=c;
                tem2 -=j;
                break;
            }
        }
        cout<<s1<<" "<<s2<<endl;
    }
}