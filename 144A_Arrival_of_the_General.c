#include<stdio.h>

int main(){
    int n, i, height[100], min, max, minIndex, maxIndex;
    scanf("%d",&n);
    for(i=1; i<=n; i++){
        scanf("%d",&height[i]);
    }
    min=max=height[1];
    minIndex = maxIndex = 1;
    // printf("%d  %d", min, max);
    for(i=1; i<=n; i++){
        if(min >= height[i]){
            min = height[i];
            minIndex = i;
        }
        if(max < height[i]){
            max = height[i];
            maxIndex = i;
        }
    }
    if(maxIndex > minIndex){
        printf("%d\n", (maxIndex + n- minIndex -2));
    }
    else{
        printf("%d\n", (maxIndex + n - minIndex -1));
    }
    return 0;
}