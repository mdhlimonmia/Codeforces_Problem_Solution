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

const int mx = 3e3;
int n,k;
string s[mx], digit[]= { "1110111", "0010010", "1011101", "1011011", "0111010", "1101011", "1101111", "1010010", "1111111", "1111011"};
int dp[mx][mx];

struct info{
    int i, c, ans;
    info(){}
    info(int i, int c, int ans): i(i),c(c),ans(ans){}
}dir[mx][mx];

int find(string s1, string s2){
    int cost = 0;
    for(int i = 0; i<7; i++){
        if(s1[i] == '1' && s2[i] == '0') return -1;
        if(s1[i] == '0' && s2[i] == '1')cost++;
    }
    return cost;
}

int isPossible(int i, int c){
    if(i == n)return (c==0);
    if(dp[i][c] != -1) return dp[i][c];
    int f = 0;

    for(int j = 9; j>=0; j--){
        int d = find(s[i], digit[j]);
        if(d == -1 || d>c)continue;
        int t = isPossible(i+1, c - d);
        if(t==1){
            f = 1;
            dir[i][c] = info(i+1,c-d, j);
            break;
        }
    }
    return dp[i][c] = f;
}
void print(int i, int c){
    if(dir[i][c].ans == -1)return;
    cout<<dir[i][c].ans;
    print(dir[i][c].i, dir[i][c].c);
}

int main()
{
    Limon();

    cin>>n>>k;
    memset(dp, -1, sizeof(dp));
    for(int i = 0; i<mx; i++){
        for(int j = 0; j<mx; j++) dir[i][j] = info(-1,-1,-1);
    }

    for(int i = 0; i<n; i++)cin>>s[i];
    if(isPossible(0,k)) print(0,k);
    else cout<<"-1";
    cout<<endl;
}