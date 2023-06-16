#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
         int str[5];
         int count=4;
        for(int i=0; i<4; i++){
            scanf("%d",&str[i]);
        }
        for(int i=0; i<4; i++){
            printf("%d",str[i]);
        }
        for(int i=0; i<4; i++){
            for(int j=i+1; j<4; j++){
                if((str[i]==str[j])){
                    // printf("\n%c %c",str[i], str[j]);
                    count--;
                    break;
                }
            }
        }
        // printf("\n%d", count);
        if(count == 4 || count == 3 ){
            printf("4\n");
        }
        else if(count == 2){
            printf("6\n");
        }
        else{
            printf("-1\n");
        }
    }
    
    return 0;
    
}