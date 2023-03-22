#include<stdio.h>
int main(){
    int n, k, result;
    scanf("%d %d",&n, &k);
    for(int i=1; ; i++){
        int temp = n*i;
        if(temp%10 == k || temp%10==0){
            result = i;
            break; 
        }
    }
    printf("%d\n",result);
}