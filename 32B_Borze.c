#include<stdio.h>
#include<string.h>
int main(){
    char arr[200];
    scanf("%s", arr);
    int length = strlen(arr);
    // printf("%d", length);
    for (int i = 0; i < length; i++)
    {
      if(arr[i] == '.'){
        printf("0");
      }
      else if (arr[i] == '-')
      {
        if(arr[i+1] == '.' ){
            printf("1");
            i++;
        }
        else{
          printf("2");
          i++; // see note
        }
      }
      
    }
    return 0;   
}

// note: if last char. is '-' you have to print '2'. because for last '--' = '-'. it is bug the problem