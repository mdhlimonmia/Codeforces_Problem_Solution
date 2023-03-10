#include<stdio.h>
int main()
{
    int n,k,sc[100],count=0;
    scanf("%d %d",&n,&k);
    for(int i=1;i<n;i++)
    {
        scanf("%d",&sc[i]);
    }
     for(int i=1;i<n;i++)
    {
         if(sc[i]>=sc[k] && sc[i]>0)
         {
             count++;
         }
     }
    printf("%d",count);
}//17 14
//16 15 14 13 12 11 10 9 8 7 6 5 4 3 2 1 0