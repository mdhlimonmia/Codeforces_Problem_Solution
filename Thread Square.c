#include <stdio.h>
#include<stdlib.h>
#include<math.h>
 
int main()
{
    long long int m, n, k, t;
    int a;
    scanf("%lld %lld %d", &m, &n, &a);
 
    if(m<=a && n<=a)
    {
        printf("1");
    }
    else if(m<=a && n>a)
    {
        k=(n-a)/a;
        printf("%lld", k+1);
    }
    else if(m>a && n<=a)
    {
        k=(m-a)/a;
        printf("%lld", k+1);
    }
    else if(m>a && n>a)
    {
        if(m%a==0 && n%a==0)
        {
            k=(m*n)/(a*a);
            printf("%lld", k);
        }
        else if(m%a==0 && n%a!=0)
        {
            k=m/a;
            t=n/a;
            printf("%lld", (k*t)+k);
        }
        else if(m%a!=0 && n%a!=0)
        {
            k=m/a;
            t=n/a;
            printf("%lld", (k*t)+k+t+1);
        }
        else if(m%a!=0 && n%a==0)
        {
            k=m/a;
            t=n/a;
            printf("%lld", (k*t)+t);
        }
    }
}