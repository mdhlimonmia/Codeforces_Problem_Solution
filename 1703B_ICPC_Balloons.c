#include <stdio.h>

int main()
{
    int t;

    scanf("%d", &t);
    while (t--)
    {
        int n, k = 0;
        char str[50];

        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf(" %c", &str[i]); // backspace before %c is very important for take character.
            int c = 0;
            for (int j = 0; j < i; j++)
            {
                if (str[i] == str[j])
                {
                    c++;

                    break;
                }
            }
            if (c == 0)
            {

                k++;
            }
        }

        printf("%d\n", n + k);
    }
}