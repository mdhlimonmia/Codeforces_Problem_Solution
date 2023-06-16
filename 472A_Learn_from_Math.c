#include<stdio.h>
int composite(int x){
    int count = 0;
    for(int i = 1; i<10; i++){
        if(x%i == 0){
            count++;
        }
    }
    if(count > 2){
        return 1;
    }
    else{
        return 0;
    }
}
int main(){
    int n;
    scanf("%d", &n);
    int x;
    x = n - 4;
    for (int i = 0; i < n; i++)
    {
        if(composite(x)){
            printf("%d %d", n-x,x);
            break;
        }
        else{
            x = x-2;
        }
    }
    
}