#include<stdio.h>

int main()
{
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n;
        scanf("%d", &n);
        if((n/2)%2 != 0){
            printf("NO\n");
        }
        else{
            printf("YES\n");
            for(int i = 0; i<n/2; i++){
                printf("%d ", 2+i*2);
            }
            for(int i = 0; i<n/2-1; i++){
                printf("%d ", 2+i*2-1);
            }
            printf("%d\n", (n/2)*2-1+n/2);
        }
    }
    return 0;
}