#include<stdio.h>

int main(){
    int n, result = 0;
    scanf("%d", &n);

   for (int i = 1; n > 0 ; i++)
    {
        n -= (i*(i+1))/2;
        if(n >= 0){
            result++;
        }
    }

    printf("%d\n", result);
    return 0;
}