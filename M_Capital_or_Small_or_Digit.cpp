///   ***   ---   |||    In the name of ALLAH    |||   ---   ***   ///

#include<bits/stdc++.h>
using namespace std;

int main()
{
    char c;
    cin>>c;
    if(c>='0' && c<='9'){
        cout<<"IS DIGIT\n";
    }else if(c>='A' && c<='Z'){
        cout<<"ALPHA\n"<<"IS CAPITAL\n";
    }else cout<<"ALPHA\n"<<"IS SMALL\n";
}