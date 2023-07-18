#include<stdio.h>
#include<string.h>

int main(){
    int n, m, result = 0;
    char color;
    scanf("%d %d", &n, &m);
    for (int i = 0; i < (n*m); i++)
    {
        scanf(" %c", &color);
        if(color == 'C' || color == 'M' || color == 'Y'){
            result++;
        }
    }

    if (result > 0) 
    {
        printf("#Color\n");
    }
    else{
        printf("#Black&White\n");
    }
    
    return 0;
}