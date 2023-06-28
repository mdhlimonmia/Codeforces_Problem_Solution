#include <stdio.h>
#include<string.h>

int main()
{
    int arr[4], length, sum = 0;
    char str[100000];
    for (int i = 0; i < 4; i++)
    {
        scanf("%d", &arr[i]);
    }
    scanf("%s", str);
    length = strlen(str);
    for(int i = 0; i<length; i++)
    {
        sum += arr[str[i]-'0'-1];
    }
    printf("%d\n", sum);

    return 0;
}