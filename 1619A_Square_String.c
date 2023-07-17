#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        char str[100];
        scanf("%s", &str);
        int length = strlen(str);
        int halfLen = length / 2;
        int count = 0;

        for (int i = 0, j = (halfLen); i < halfLen, j < length; i++, j++)
        {
            if (str[i] != str[j])
            {
                count = 1;
                break;
            }
        }

        if (count == 0 && length%2 == 0)
        {
            printf("YES\n");
        }
        else
        {
            printf("NO\n");
        }
    }
    return 0;
}