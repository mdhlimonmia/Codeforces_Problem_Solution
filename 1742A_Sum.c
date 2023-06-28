#include<stdio.h>
int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int arr[3], max = 0, sum = 0;
        for (int i = 0; i < 3; i++)
        {
            scanf("%d", &arr[i]);
            sum += arr[i];
            if(max < arr[i]){
                 max = arr[i];
            }
        }
        if(sum - max == max){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
}