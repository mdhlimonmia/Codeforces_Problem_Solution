#include <stdio.h>

int main() 
{
    char a[100];
    gets(a);
    for(int i=0; i<strlen(a);i=i+2)
    {
        
        for(int j=i+2; j<strlen(a);j=j+2)
        {   int k=a[i];
            if(a[i]>a[j])
            {
                a[i]=a[j];
                a[j]=k;
            }
        }
    }
    printf("%s",a);
    return 0;
}