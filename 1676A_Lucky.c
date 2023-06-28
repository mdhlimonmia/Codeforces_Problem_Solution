#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int ticket, sum = 0;
        scanf("%d", &ticket);
        for (int i = 0; i < 3; i++)
        {
            sum += ticket%10;
            ticket = ticket/10;
        }
        for (int i = 0; i < 3; i++)
        {
            sum -= ticket%10;
            ticket = ticket/10;
        }
        if(sum == 0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}