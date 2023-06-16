#include<stdio.h>

int main(){
    int n, k, y, member = 0;
    scanf("%d %d", &n, &k);
    for(int i =0; i<n; i++){
        scanf("%d", &y);
        if((5 - k) >= y){
            member++;
        }
    }
    printf("%d", member/3);
    return 0;
}