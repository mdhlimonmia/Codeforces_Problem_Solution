#include <stdio.h>

// find different number
int find_different_number(int arr[], int n)
{
    int position = 0;
    for (int i = 0; i < n; i++)
    {
        if(arr[i]== arr[i+1]){
                position++;
    
            }else{
                if(arr[i+1] == arr[i+2]){
                    break;
                }else{
                    position++;
                    break;
                }
            }
    }
    return position + 1;
}

int main()
{
    int t, result;
    scanf("%d", &t);
    while (t--)
    {
        int n, arr[100];
        scanf("%d", &n);
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &arr[i]);
        }
        result = find_different_number(arr, n);
        printf("%d\n", result);
    }
    return 0;
}