#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    char a[100], e[100], f[100], g[100];
    int length, i, c=0, d=0;
    scanf("%s", &a);
    length=strlen(a);

    for(i = 0; i<length; i++)
    {
        if(isupper(a[i])==1)
        {
            c++;
        }
        else
        {
            d++;
        }
    }
    if(c>d)
    {
        printf("%s", strupr(a));
    }
    else if(c==d)
    {
        printf("%s", strlwr(a));
    }
    else
    {
        printf("%s", strlwr(a));
    }

    return 0;
}
