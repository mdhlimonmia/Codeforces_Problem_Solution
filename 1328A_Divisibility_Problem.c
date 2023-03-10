#include<stdio.h>

int main(){
    int t;
    scanf("%d",&t);
    while(t--){
        int a, b, result;
        scanf("%d %d", &a, &b);
        if(a % b == 0){
            printf("%d\n",0);
        }
        else{
            result =(b - (a % b));
            printf("%d\n",result);
        }
    }
}