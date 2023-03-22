#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {   
        int a, b;
        scanf("%d %d",&a, &b);
        int sub = (a>b)?(a-b):(b-a);
        int result;
        if(a != b && sub%10 !=0){
            result = (sub/10) + 1;
        }
        else{
            result = (sub/10);
        }

        printf("%d\n",result);
    }
    
}