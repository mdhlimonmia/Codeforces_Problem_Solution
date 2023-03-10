#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char arr[1000];
    // scanf("%s",&arr);
    scanf("%[^\n]",&arr);
    int length = strlen(arr), c=0, k=0;
    // printf("length = %d\n",length);
    for(int i=1; i<length; i+=3){
        k++;
        // printf("%c\n",arr[i]);
        for(int j=i+3; j<length; j+=3){
            if(arr[i]==arr[j]){
                c++;
                break;
            }
        }
    }
    if(length==2){
         c=1;
    }
    printf("%d\n", (k-c));
    // printf("%c %c",arr[1],arr[4]);
    // printf("%d %d\n",k,c);
}