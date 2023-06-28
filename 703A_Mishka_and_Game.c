#include<stdio.h>
int main(){
    int round, m = 0, c = 0, x, y;
    scanf("%d", &round);
    for (int i = 0; i < round; i++)
    {
        scanf("%d %d", &x, &y);
        if(x > y){
            m++;
        }
        else if(x < y){
            c++;
        }
    }
    if(m > c){
        printf("Mishka\n");
    }
    else if (m < c){
        printf("Chris\n");
    }
    else{
        printf("Friendship is magic!^^\n");
    }
    return 0;
}