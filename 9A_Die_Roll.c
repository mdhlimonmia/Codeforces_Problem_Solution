#include<stdio.h>
int main(){
    int a,b;
    scanf("%d %d", &a, &b);
    int max = ((a>b)? a : b);
    int remain = 6 - max + 1;

    if(remain == 0){
        printf("0/1");
    }
    else if (remain == 1)
    {
        printf("1/6");
    }
    else if (remain == 6)
    {
        printf("1/1");
    }
    else if (remain % 2 == 0)
    {
        printf("%d/%d\n", remain/2, 3);
    }
    else if (remain  == 3)
    {
        printf("1/2");
    }
   else if (remain == 5)
   {
    printf("5/6");
   }
   else{
    printf("1/1");
   }
   
    
    return 0;
}