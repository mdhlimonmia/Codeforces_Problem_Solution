#include<stdio.h>

int main(){
    int n, m;
    scanf("%d",&n);
    while (n--)
    {
        scanf("%d",&m);
        if(m%2==0){
            printf("%d\n",(m/2)-1);
        }
        else{
            printf("%d\n",(m/2));
        }
    }
    return 0;
}