#include<iostream>
using namespace std;

int main(){
    string s; cin>>s;
    int n = s.size();

    int x = 0, y = 0;
    bool f = 1;
    for (int i = 0; i < n; i++)
    {
        if(s[i] == '(')x++;
        else{
            if(x<=0){
                f = 0;
                break;
            }else{
                x--;
            }
        }
    }
    if(x != 0 || f == 0)cout<<"No\n";
    else cout<<"Yes\n";
}