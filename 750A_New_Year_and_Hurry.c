#include<stdio.h>

int main(){
    int n, k;
    scanf("%d %d", &n, &k);
    int temp = 240 - k, count = 0, spend = 0;
    for(int i=1; i <= n; i++){
        spend += i*5;
        if(temp >= spend){
            count++;
        }
    }
    printf("%d\n",count);
}