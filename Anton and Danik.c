#include<stdio.h>
#include<string.h>
#include<stdlib.h>

int main()
{
    int n, i, j, b=0, c=0;
    scanf("%d", &n);
    char a[100000];
    for(i=0; i<=n; i++)
    {
        scanf("%c", &a[i]);
        if(a[i]=='A')
        {
            c++;
        }
        else if(a[i]=='D')
        {
            b++;
        }
    }
    if(c>b)
    {
        printf("Anton");
    }
    else if(c==b)
    {
        printf("Friendship");
    }
    else
    {
        printf("Danik");
    }

    return 0;
}
