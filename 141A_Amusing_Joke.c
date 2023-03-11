#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main(){
    char str1[100], str2[100], str3[100], k=0;
    scanf("%s",str1);
    scanf("%s",str2);
    scanf("%s",str3);
    int length1 = strlen(str1) + strlen(str2);
    int length2 = strlen(str3);
    strcat(str1,str2);
    if(length1 != length2){
        printf("NO\n");
    }
    else{
        for(int i=0; i<length1; i++){
            for(int j=0; j<length1; j++){
                if(str1[i] == str3[j]){
                    str3[j] = '#';
                    k++;
                    break;
                }
            }
            
        }
        if(k==length2){
            printf("YES");
        }
        else{
            printf("NO");
        }
    }
    return 0;
}