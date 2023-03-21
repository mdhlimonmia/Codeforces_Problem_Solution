#include<stdio.h>

int main(){
    int n,m, min, result;
    scanf("%d %d", &n, &m);
    if(n>m){
        result = (n-m)/2;
        printf("%d %d\n",m,result);
    }
    else{
        result = (m-n)/2;
        printf("%d %d\n",n,result);
    }

}