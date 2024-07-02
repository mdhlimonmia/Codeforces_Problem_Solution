#include <bits/stdc++.h>
using namespace std;
#define endl '\n'
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define lli long long int
const int mx = 500+123;
char arr[mx][mx];
void solve(){
    int n,m;cin>>n>>m;
    lli w = 0,b = 0;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>arr[i][j];
            if(arr[i][j] == 'W')w++;
            else b++;
        }
    }
    if(w == 0 || b == 0){
        cout<<"YES\n";
        return;
    }
    if(n == 1 && arr[0][0] != arr[0][m-1]){
        cout<<"NO\n";
        return;
    }
    if(m == 1 && arr[0][0] != arr[n-1][0]){
        cout<<"NO\n";
        return;
    }
    bool f = false;
    int x1mx,x1mn,y1mx,y1mn,x2mx,x2mn,y2mx,y2mn;
    x1mx = x1mn = y1mx = y1mn = x2mx = x2mn = y2mx = y2mn = -1;
    //Row Cheek
    for(int i = 0; i<n; i++){
        if(arr[i][0] == 'W'){
            if(x1mx != -1){
                x1mn = min(x1mn,i);
                x1mx = max(x1mx,i);
            }
            else x1mx = x1mn = i;
        }
        if(arr[i][m-1] == 'W'){
            if(y1mx != -1){
                y1mn = min(y1mn,i);
                y1mx = max(y1mx,i);
            }
            else y1mx = y1mn = i;
        }

        //B Cheek
        if(arr[i][0] == 'B'){
            if(x2mx != -1){
                x2mn = min(x2mn,i);
                x2mx = max(x2mx,i);
            }
            else x2mx = x2mn = i;
        }
        if(arr[i][m-1] == 'B'){
            if(y2mx != -1){
                y2mn = min(y2mn,i);
                y2mx = max(y2mx,i);
            }
            else y2mx = y2mn = i;
        }
        // cout<<arr[i][m-1]<<" ";
    }
    // cout<<x1mn<<" "<<x1mx<<" "<<y1mn<<" "<<y1mx<<endl;
    if(x1mn == 0 && y1mx == n-1)f = true;
    else if(x1mx == n-1 && y1mn == 0)f = true;
    else if(x1mn == 0 && x1mx == n-1 && y1mn != -1)f = true;
    else if(y1mn == 0 && y1mx == n-1 && x1mn != -1)f = true;
    //B Cheek
    if(x2mn == 0 && y2mx == n-1)f = true;
    else if(x2mx == n-1 && y2mn == 0)f = true;
    else if(x2mn == 0 && x2mx == n-1 && y2mn != -1)f = true;
    else if(y2mn == 0 && y2mx == n-1 && x2mn != -1)f = true;

    //Column Cheek
    
    x1mx = x1mn = y1mx = y1mn = x2mx = x2mn = y2mx = y2mn = -1;
    for(int i = 0; i<m; i++){
        if(arr[0][i] == 'W'){
            if(x1mx != -1){
                x1mn = min(x1mn,i);
                x1mx = max(x1mx,i);
            }
            else x1mx = x1mn = i;
        }
        if(arr[n-1][i] == 'W'){
            if(y1mx != -1){
                y1mn = min(y1mn,i);
                y1mx = max(y1mx,i);
            }
            else y1mx = y1mn = i;
        }

        //B Cheek
        if(arr[0][i] == 'B'){
            if(x2mx != -1){
                x2mn = min(x2mn,i);
                x2mx = max(x2mx,i);
            }
            else x2mx = x2mn = i;
        }
        if(arr[n-1][i] == 'B'){
            if(y2mx != -1){
                y2mn = min(y2mn,i);
                y2mx = max(y2mx,i);
            }
            else y2mx = y2mn = i;
        }
        // cout<<arr[i][m-1]<<" ";
    }
    // cout<<x1mn<<" "<<x1mx<<" "<<y1mn<<" "<<y1mx<<endl;
    if(x1mn == 0 && y1mx == m-1)f = true;
    else if(x1mx == m-1 && y1mn == 0)f = true;
    else if(x1mn == 0 && x1mx == m-1 && y1mn != -1)f = true;
    else if(y1mn == 0 && y1mx == m-1 && x1mn != -1)f = true;
    //B Cheek
    if(x2mn == 0 && y2mx == m-1)f = true;
    else if(x2mx == m-1 && y2mn == 0)f = true;
    else if(x2mn == 0 && x2mx == m-1 && y2mn != -1)f = true;
    else if(y2mn == 0 && y2mx == m-1 && x2mn != -1)f = true;

    if(f) cout<<"YES\n";
    else cout<<"NO\n";
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