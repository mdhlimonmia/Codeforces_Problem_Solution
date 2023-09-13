#include<stdio.h>
int main()
{
    int t;
    scanf("%d",&t);
    while(t--)
    {
        int i,arr[100000],n,c=0,d=0,sum=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d",&arr[i]);
            if(arr[i]==-1)
            {
                c++;
            }
            if(arr[i]==-1 && arr[i-1]==-1)
            {
                d++;
            }
            sum += arr[i];
        }

        if(d > 0){
           printf("%d\n", sum+4);
        }
        else if (c > 0)
        {
            printf("%d\n", sum);
        }
        else{
            printf("%d\n", sum -4);
        }
        
    }
}