#include<stdio.h>
#include<string.h>
int main()
{
    int flag=0,i,value=0;
    char s1[100],s2[100];
    gets(s1);
    gets(s2);
    strlwr(s1);
    strlwr(s2);

    for(int i=0;s1[i]!='\0'||s2[i]!='\0';i++)
    {
        if(s1[i]!=s2[i])
        {
             if(s1[i]<s2[i])
            {
                value=-1;
                break;
            }
                else if(s1[i]>s2[i])
            {
                value=1;
                break;
            }
        }

    }
   printf("%d",value);

    return 0;
}
