#include<stdio.h>
int main()
{
    char ch[101];
    int i,j,k,l,c=0,n;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {   int count=0;
        scanf("%d %d %d",&j,&k,&l);
        count=j+k+l;
        if(count>=2)
        {
          c++;
        }
    }
    printf("%d\n",c);
    return 0;
}
