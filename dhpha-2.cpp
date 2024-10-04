#include <bits/stdc++.h>
#define Limon() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl '\n'
using namespace std;
#define ll long long


int main() {
    // Limon();
    string s, t = "";
    while(getline(cin,s)) {
        int l = s.size();
        stack<char>st;
        for(int i = 0; i<l; i++){
            if(s[i] == '<' && s[i+1] == '/'){

            }
            else if(s[i] == '<'){
                t = s[i+1];
                t += s[i+2];
                while(s[i] != '>'){
                    st.push(s[i]);
                    i++;
                }
                st.push(s[i]); i++;
            }else{
                if(t == "h1"){
                    
                }
            }
        }
    }

    return 0;
}