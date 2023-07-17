#include <stdio.h>

// int gcd(int a, int b){
//     int result;
//     for(int i = 1; i<=a; i++){
//         if(a%i == 0 && b%i ==0){
//             result = i;
//         }
//     }
//     return result;
// }

int main()
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int n;
        scanf("%d", &n);

        printf("%d\n", n / 2);
    }
    return 0;
}