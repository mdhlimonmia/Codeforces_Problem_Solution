#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char a[100];
    int i, c=0, length, d=0;
    gets(a);
    length=strlen(a);
    int k=0;
    for(i=0; i<length; i++)
    {
        if(a[i]=='4')
        {
            d++;
        }
        else if(a[i]=='7')
        {
            k++;
        }
    }
    int x=k+d;
    if(x==4 || x==7)
    {
        printf("YES");
    }
    else
    {
        printf("NO");
    }

}
