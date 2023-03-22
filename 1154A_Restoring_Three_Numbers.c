#include<stdio.h>
int main(){
    int arr[4], max=0;
    for(int i=0; i<4; i++){
        scanf("%d",&arr[i]);
        if(max < arr[i]){
            max = arr[i];
        }
    }
    for(int i=0; i<4; i++){
        int ans = max-arr[i];
        // printf("%d %d \n", max, ans);
        if(ans!=0){
            printf("%d ",ans);
        }
    }
}