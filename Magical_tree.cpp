#include <bits/stdc++.h>
using namespace std;
#define endl '\n'

int main()
{
    int n; cin>>n;
    int k = n/2 + 6; // line of the triangle is (n/2) + 6.

    //triangle part.
    for (int i = 1; i <= k; i++)
    {
        for (int j = 1; j <= k-i; j++) cout<<" ";  //number of the space for i line is (k-i).
        for (int j = 1; j <= i*2 -1; j++)cout<<"*"; //number of the star for i line is (i*2-1).
        cout<<endl;
    }
    //triangle tail part.
    for (int i = 1; i <= 5; i++) //all triangle tail length is 5.
    {
        for (int j = 1; j <= 5; j++)cout<<" "; // every time have 5 space before star.
        for (int j = 1; j <= n; j++)cout<<"*"; // every line have n time star.
        cout<<endl;
    }
    
}
