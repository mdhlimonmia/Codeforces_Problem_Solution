#include <stdio.h>
int main()
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, arr[100], sum = 0, numOne = 0;
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
            sum += arr[i];
            if (arr[i] == 1)
            {
                numOne++;
            }
        }
        // if sum not even it's not possible to divided tow part
        if (sum % 2 != 0) 
        {
            printf("NO\n");
        }
        else
        {
            int temp = sum / 2;

            // if sum/2 even or (number of the 1 is even but number of the one not 0 (0 also even so be careful))
            if (temp % 2 == 0 || (numOne % 2 == 0 && numOne != 0))
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