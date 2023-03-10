/*#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    if(n%2==0 || n!=2)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }
    return 0;
}*/
#include<stdio.h>
int main()
{
int n;
scanf("%d", &n);
if(n <= 2 || n%2 != 0)
{
printf("NO\n");
}
else{
printf("YES\n");
}
return 0;
}
