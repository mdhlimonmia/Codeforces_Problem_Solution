#include <stdio.h>

int main() 
{
    char a[100][100];
    int n,i;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%s",a[i]);
    }
    for(i=0;i<n;i++)
    {
        //printf("%s\n",a[i]);
        int leng=strlen(a[i]);
        //printf("%d\n",leng);
        if(leng>10 && leng<=100)
        {
            printf("%c%d%c\n",a[i][0],(leng-2),a[i][leng-1]);
        }
        else if(leng>100)
        {
            leng=100;
            printf("%c%d%c\n",a[i][0],(leng-2),a[i][leng-1]);
        }
        else
        {
            printf("%s\n",a[i]);
        }
    }
    
    return 0;
}