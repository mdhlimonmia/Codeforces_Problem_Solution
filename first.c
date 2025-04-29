#include<stdio.h>
#include<math.h>
int main()
{
    int n; 
    scanf("%d", &n);
    if(n%2 == 0)
    {
        printf("%d is Even\n", n);
    }else
    {
        printf("%d is Odd\n", n);
    }
}