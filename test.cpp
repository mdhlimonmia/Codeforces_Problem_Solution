#include<bits/stdc++.h>
using namespace std;

int main(){

     // a = 5(00000101), b = 9(00001001)
    char a = 1, b = 3, c = 4, d = 15, e = 6, f = 15;
 
 
    // The result is 00001100
    printf("a^b = %d\n", a ^ b ^ c ^ d ^ e ^ f);
 
 
    return 0;
}