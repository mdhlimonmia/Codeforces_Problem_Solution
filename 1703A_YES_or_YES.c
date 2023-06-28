#include <stdio.h>
#include <string.h>

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
       char arr[4];
        scanf("%s", &arr);
        strlwr(arr);
        // strupr(arr);
        int result = strcmp("yes", arr);
        if(result == 0){
            printf("YES\n");
        }
        else{
            printf("NO\n");
        }
    }
}