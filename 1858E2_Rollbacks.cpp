#include<bits/stdc++.h>
using namespace std;

#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
// #define endl '\n'

int main(){
    Limon();
    int n;
    cin>>n>>ws;
    vector <int> arr;
    for(int i=0;i<n;i++){
       char x; cin>>x;
        // cout<<s[0]<< endl;
        if(x == '+'){
            int value; cin>>value;
            arr.push_back(value);
        }else if(x  ==  '-'){
            // int size=s[2]-'0';
            // cout<<size;
            // cout<<s[2];
            int value; cin>>value;
            while (value--)
            {
                arr.pop_back();
            }
            
        }else if(x == '!'){
            arr.pop_back();
        }else if(x=='?'){
            vector <int> tmp=arr;

            sort(tmp.begin(),tmp.end());
            int un=unique(tmp.begin(),tmp.end())-tmp.begin();
            cout<<un<<endl;
            // cout<<"err";
        }
    }
}