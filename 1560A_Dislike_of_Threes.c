#include<stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int k;
        scanf("%d", &k);
        for(int i = 1; ; i++){
            if(i % 3 == 0 || i % 10 == 3){ 
                continue;
            }
            else if (--k == 0)
            {
                printf("%d\n", i);
                break;
            }
            
        }
    }
    return 0;
}