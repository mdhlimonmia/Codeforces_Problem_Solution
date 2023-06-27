#include<stdio.h>
#include<string.h>
int main(){
    int t;
    scanf("%d", &t);
    while (t--)
    {
        char arr[100];
        scanf("%s", arr);
        
        int length = strlen(arr);
        for (int i = 0; i < length; i++)
        {
            if(arr[i] == arr[i+1]){
                printf("%c", arr[i]);
                i++;
            }
            else{
                printf("%c", arr[i]);
            }
        }
        //if all char same
        int count = 0;
        for (int i = 0; i < length; i++)
        {
            if(arr[0] == arr[i]){
                count++;
            }
            
        }
        // printf("\nlenght =  %d %d", length, count );
        if(length == count){
            printf("%c", arr[0]);
        }
        printf("\n");
    }
    return 0;
}