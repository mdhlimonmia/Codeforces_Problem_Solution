#include<stdio.h>
int main(){
    int t;
    scanf("%d",&t);
    while (t--)
    {
        int n, arr[50];
        scanf("%d",&n);
        for(int i=0; i<n; i++){
            scanf("%d", &arr[i]);
        }
        if(n==1){
            printf("YES\n");
        }
        else{
            for(int i=0; i<n; i++){
                for(int j=i+1; j<n; j++){
                    int temp = arr[i];
                    if(arr[i]>arr[j]){
                        arr[i] = arr[j];
                        arr[j] = temp;
                    }
                }
            }
            int result=0;
            for(int i=0; i<n-1; i++){
                if((arr[i+1]-arr[i]) > 1){
                    printf("NO\n");
                    result++;
                }
            }
            if(result == 0){
                printf("YES\n");

            }
        }
        
    }
    return 0;
}