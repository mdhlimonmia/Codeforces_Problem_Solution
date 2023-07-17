#include<stdio.h>

int main(){
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char arr[] = "codeforces", x;
        int count = 0;
        scanf(" %c", &x);
        for(int i=0; i<10; i++){
            if(arr[i] == x){
                count = 1;
                break;
            }
        }
        if(count == 1){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
    return 0;
    
}