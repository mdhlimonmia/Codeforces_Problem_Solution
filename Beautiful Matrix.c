#include <stdio.h>

int main() 
{
    int m[5][5],i,j,r=0,c=0,result=0;
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            scanf("%d",&m[i][j]);
        }
    }
    for(i=0;i<5;i++)
    {
        for(j=0;j<5;j++)
        {
            if(m[i][j]==1)
            {
                r=i;
                c=j;
            }
        }
    }
    
    result=abs(2-r)+abs(2-c);
    printf("%d",result);

    return 0;
}