#include<stdio.h>
int main(){
    int arr[3], result = 0;
    scanf("%d %d %d", &arr[0], &arr[1], &arr[2]);
    for(int i=0; i<3; i++){
        for(int j=i+1; j<3; j++){
            if(arr[i]>arr[j]){
                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    result += arr[2]-arr[1] + arr[1] - arr[0];
    printf("%d\n",result);
}