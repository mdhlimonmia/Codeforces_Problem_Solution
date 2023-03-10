#include<stdio.h>
#include<string.h>

int main(){
    int n, count=0;
    scanf("%d",&n);
    char arr[n];
    scanf("%s",&arr);
    strlwr(arr);
    for(int j=97; j<=122; j++){
        for(int i=0; i<=n; i++){
            
            if(arr[i]==j){
                count++;
                break;
            }
        }
    }
    if(count==26){
        printf("YES\n");
    }
    else
        printf("NO\n");
    return 0;
}