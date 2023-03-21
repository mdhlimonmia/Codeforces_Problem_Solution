#include<stdio.h>
int main(){
    int n, arr[1000];
    scanf("%d",&n);
    for(int i=0; i<n; i++){
        scanf("%d",&arr[i]);
    }
    int max = arr[0], min = arr[0], count=0;
    for (int i = 0; i < n; i++)
    {
        if(max < arr[i]){
            max = arr[i];
            count++;
        }
        if(min > arr[i]){
            min = arr[i];
            count++;
        }
    }
    
    printf("%d\n",count);
}