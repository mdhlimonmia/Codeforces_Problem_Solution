#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main(){
    int t,n;
    scanf("%d",&t);
    while(t--){
        int arr[5],k=0,p=0;
        scanf("%d",&n);
        for(int i=1; n; i++){
            if(n%10==0){
                n=n/10;
            }
            else{
                int temp =n%10;
                double pw = pow(10,i-1);
                arr[k++]=temp*pw;
                n=n/10;
                p++;
            }
        }
        printf("%d\n",p);
        for (int i = 0; i < p; i++)
        {
            printf("%d ",arr[i]);
        }
        printf("\n");
    }
}