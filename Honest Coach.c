#include<stdio.h>


int main()
{
    int t;
    scanf("%d",&t);
    while(t>0)
    {
        int n,arr[1000],min=0,i,j;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
        }
        for(i=0;i<n;i++)
        {
            for(j=i+1;j<n;j++)
            {
                int sub=abs(arr[i]-arr[j]);
                if(j==1){
                    min=sub;
                }
                if(min>sub)
                    min=sub;
            }
        }
        printf("%d\n",min);

        t--;
    }
}
