#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        if (n % 7 == 0)
        {
            printf("%d\n", n);
        }
        else
        {
            int last_digit = n%10;
            int remain = n%7;
            int need =(7 - remain); 

            if(last_digit + need < 10){
                printf("%d\n", n+need);
            }
            else{
                printf("%d\n", n-remain);
            }
        }
    }
    return 0;
}