#include<stdio.h>
int main(){
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int a, b, c, n, total = 0, perCoin;
        scanf("%d %d %d %d", &a, &b, &c, &n);

        total = a+b+c+n;
        perCoin = total/3;
        // equal = perCoin - a + perCoin - b + perCoin - c;
        if(total%3 == 0 && perCoin >= a && perCoin >= b && perCoin >= c){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    
}