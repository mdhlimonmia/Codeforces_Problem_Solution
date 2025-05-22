#include<bits/stdc++.h>
using namespace std;

bool isValid(string s) {
    // Write your code here
    stack<char>st;
    for(int i = 0; i<s.size(); i++){
        if(s[i]=='(' || s[i]=='{' || s[i] == '[')st.push(s[i]);
        else{
            char c = st.top();
            if((s[i] == ')' && c != '(') || (s[i]==']' && c != '[') || s[i] == '}' && c != '{')return false;
            st.pop();
        }
    }
    if(st.empty())return true;
    else return false;
}

int main() {
    
    cout << isValid("{()}") << endl;         // Output: 1
    cout<<']' - '['<<endl;

    return 0;
}
