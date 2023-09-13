#include <bits/stdc++.h>
using namespace std;

int main()
{
    string str;
    cin >> str;
    int rotation, antyrtation, result;
    rotation = abs(str[0] - 'a');
    antyrtation = abs(rotation - 26);
    if (rotation < antyrtation)
    {
        result = rotation;
    }
    else
    {
        result = antyrtation;
    }
    for (int i = 1; i < str.size(); i++)
    {
        rotation = abs(str[i] - str[i - 1]);
        antyrtation = abs(rotation - 26);
        if (rotation < antyrtation)
        {
            result += rotation;
        }
        else
        {
            result += antyrtation;
        }
    }

    cout << result;
}