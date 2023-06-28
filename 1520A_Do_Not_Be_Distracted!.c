#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n, k, again = 0;
        scanf("%d", &n);
        char str[n + 10];
        // for (int i = 0; i < n; i++)

        scanf("%s", str);

        for (int i = 0; i < n; i++)
        {
            k = 0;
            for (int j = i + 1; j < n; j++)
            {
                if (str[i] == str[j])
                {
                    if (k > 0)
                    {
                        again = 1;
                        break;
                    }
                }
                else if (str[i] != str[j])
                {
                    k++;
                }
            }
            if (again == 1)
            {
                break;
            }
        }
        if (again == 1)
        {
            printf("NO\n");
        }
        else
        {
            printf("YES\n");
        }
    }
    return 0;
}