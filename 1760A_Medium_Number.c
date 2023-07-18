#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int a, b, c;

        scanf("%d %d %d", &a, &b, &c);

        int medium = (a > b)? ((a < c)? a : ((c > b)? c : b)) : ((b < c)? b : ((c > a)? c : a));
        printf("%d\n", medium);
    }
    
}