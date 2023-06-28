#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int x, digit, result;
        scanf("%d", &x);
        digit = x%10 - 1;
        result = 10*digit;
        for(int i = 1; x != 0; i++){
            x /=10;
            result += i;
        }
        printf("%d\n", result);
    }
    
}