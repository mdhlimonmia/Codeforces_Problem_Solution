#include<stdio.h>
#include<math.h>

int main(){
    int t;
    scanf("%d", &t);
    while (t--)
    {
        double n, x;
        scanf("%lf %lf", &n, &x);

        if(n<2){
            printf("1\n");
        }
        else{
            int result = ceil(((n - 2)/x)) + 1;
            printf("%d\n", result);
        }
    }
    
}