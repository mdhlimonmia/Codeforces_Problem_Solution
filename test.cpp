// #include<bits/stdc++.h>
// using namespace std;

// int main(){
//     string s;
//     cin>>s;
//     int k = s.size();
//     if((s[0] == '-' || s[0] == '+') && k>1)s[0] = '0';
//     bool e = 0, dot = 0, ok = 1;
//     for(int i = 0; i<s.size(); i++){
//         if(isdigit(s[i]) == 0){
//             if((s[i] == 'e' || s[i] == 'E') && e == 0 && i+1<k) e = 1;
//             else if( s[i] == '.' && (e == 0 && dot == 0) && i+1<k)dot = 1;
//             else if((s[i] == '-' || s[i] == '+') && (s[i-1] == 'e' || s[i-1] == 'E') && i+1<k) continue;
//             else{
//                 ok = 0;
//                 break;
//             }
//         }
//     }
//     if(ok)cout<<"Is Digit\n";
//     else cout<<"Not Digit\n";
// }

#include <iostream>
#include <string>
#include <cctype>

bool isValidInteger(const std::string& input) {
    int i = 0, len = input.length();
    if (i < len && (input[i] == '+' || input[i] == '-')) i++;
    bool hasDigits = false;
    while (i < len && std::isdigit(input[i])) { i++; hasDigits = true; }
    if (i < len && (input[i] == 'e' || input[i] == 'E')) {
        i++;
        if (i < len && (input[i] == '+' || input[i] == '-')) i++;
        bool hasExpDigits = false;
        while (i < len && std::isdigit(input[i])) { i++; hasExpDigits = true; }
        if (!hasExpDigits) return false;
    }
    return i == len && hasDigits;
}

int main() {
    std::string input;
    std::cin >> input;
    std::cout << (isValidInteger(input) ? "Valid integer format.\n" : "Invalid integer format.\n");
    return 0;
}