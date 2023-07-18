#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int hour, min;
        scanf("%d %d", &hour, &min);
        int result = 1440 - ((hour * 60) + min);
        printf("%d\n", result);
    }
    
}