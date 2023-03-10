#include<stdio.h>
int findYear(int);
int main(){
    int year,result;
    scanf("%d",&year);
   int temp=year;
    while(1){
        temp=temp+1;
        result = findYear(temp);
        if(result==1){
            break;
        }

    }
    printf("%d\n",temp);
    return 0;
}
int findYear(int year){
    int yearDigit[4], i, j, temp=0;
    for(i=0; i<4; i++){
        yearDigit[i]= year%10;
        year = year/10;

    }
    for(i=0; i<4; i++){
        for(j=i+1; j<4; j++){
            if(yearDigit[i] == yearDigit[j]){
                temp++;
            }
        }
    }
    if(temp == 0){
            return 1;
    }
    else{
        return 0;
    }
}