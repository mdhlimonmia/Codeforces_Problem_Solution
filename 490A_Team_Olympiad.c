#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d", &n);
    int arr1[n], arr2[n], arr3[n], t, x = 0, y = 0, z = 0;
    for(int i = 0; i<n; i++){
        scanf("%d", &t);
        if(t == 1){
            arr1[x] = i+1;
            x++;
        }
        else if(t == 2){
            arr2[y] = i+1;
            y++;
        }
        else if(t == 3){
            arr3[z] = i+1;
            z++;
        }
    }
    
    int min = (x<y)? ((x<z)? x : z) : ((y<z)? y: z);
    printf("%d\n", min);
    for (int i = 0; i < min; i++)  
    {
        printf("%d %d %d\n", arr1[i], arr2[i], arr3[i]);
    }
    
    return 0;
}