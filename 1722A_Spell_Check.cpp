#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k = 0;
        char name[] = {'T', 'i', 'm', 'u', 'r'}, c;
        scanf("%d", &n);
        if (n != 5)
        {
            while (n--) scanf(" %c", &c);
            
            printf("NO\n");
        }
        else
        {
            while (n--)
            {
                scanf(" %c", &c);
                for (int i = 0; i < 5; i++)
                {
                    if (name[i] == c)
                    {
                        k++;
                        name[i] = -1;
                    }
                }
            }
            if (k == 5)
            {
                printf("YES\n");
            }
            else
            {
                printf("NO\n");
            }
        }
    }
    return 0;
}