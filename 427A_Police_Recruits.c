#include<stdio.h>
int main(){
    int n, arr[100000],p=0;
    scanf("%d",&n);
    for (int  i = 0; i < n; i++)
    {
        scanf("%d",&arr[i]);
    }
    for (int  i = 0; i < n; i++)
    {
        if(arr[i]==-1){
            p++;
        }
        else{
            arr[i+1]+=arr[i];
        }
    }
    printf("%d\n",p);
}