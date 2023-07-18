#include <stdio.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int arr[4];
        for (int i = 0; i < 4; i++)
        {
            scanf("%d", &arr[i]);
        }

        int max, min;

        if (arr[0] > arr[1])
        {
            max = arr[0];
            min = arr[1];
        }
        else
        {
            max = arr[1];
            min = arr[0];
        }
        if((arr[2] > arr[3]) && arr[2] > min && arr[3] < max){
            printf("YES\n");
        }
        else if ((arr[3] > arr[2]) && arr[3] > min && arr[2] < max)
        {
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
        
    }
}