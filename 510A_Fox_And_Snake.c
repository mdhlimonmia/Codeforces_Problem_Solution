#include<stdio.h>
#include<string.h>
int main(){
    int n, m;
    scanf("%d %d",&n, &m);
    // printf("%d %d",m,n);
    for(int i=1; i<=n; i++){
        if(i%2==1){
           for(int j=1; j<=m; j++){
            printf("#");
           }
           printf("\n");
        }
        else if((i/2)%2==1){
           for(int j=1; j<m; j++){
            printf(".");
           }
           printf("#\n");
        }
        else if((i/2)%2==0){
            printf("#");
           for(int j=1; j<m; j++){
            printf(".");
           }
           printf("\n");
        }
    }
    return 0;
}