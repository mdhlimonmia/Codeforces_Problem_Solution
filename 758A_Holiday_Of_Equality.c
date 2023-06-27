#include<stdio.h>
int main(){
    int n;
    scanf("%d", &n);
    int arr[n], max = 0, sum = 0, ignore;
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
        if(max < arr[i]){
            max = arr[i];
            ignore = i; // ignore the max number when sum
        }
    }

    for (int i = 0; i < n; i++)
    {
       if(i != ignore){
        sum += max - arr[i];
       }
    }
    printf("%d\n", sum);
}