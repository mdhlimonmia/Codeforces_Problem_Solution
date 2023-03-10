#include<stdio.h>
int main(){
    int n;
    int h[30], a[30], count = 0;
    scanf("%d",&n);
    for(int i = 0; i<n; i++){
        
        scanf("%d %d",&h[i],&a[i]);
    }
    for(int i = 0; i<n;i++){
        
        // printf("%d %d\n",h[i],a[i]);
        for(int j=0; j<n; j++){
            if(h[i] == a[j]){
                count++;
            }
        }
    }
    printf("%d\n",count);
    return 0;
}