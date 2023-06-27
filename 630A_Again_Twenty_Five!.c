#include<stdio.h>
#include<math.h>

int main(){
    double n, result;
    scanf("%lf", &n);
    result = (pow(5,n));
    printf("%d\n",25);
    return 0;
}

// #include <stdio.h>
// #include <math.h>

// int main(){
//     int n;
//     scanf("%lf", &n);
//     double powResult = pow(5, n);
//     double result = fmod(powResult, 100);
//     printf("%lf\n", result);
//     return 0;
// }


// #include <stdio.h>
// #include <math.h>

// int main() {
//     unsigned long long n;
//     scanf("%llu", &n);
//     unsigned long long result = fmod(pow(5, n), 100);
//     printf("%llu\n", result);
//     return 0;
// }

// #include <stdio.h>

// int main() {
//     unsigned long long n;
//     scanf("%llu", &n);
    
//     // Calculate the last two digits
//     unsigned long long result = 1;
//     for (unsigned long long i = 0; i < n; i++) {
//         result = (result * 5) % 100;
//     }
    
//     printf("%02llu\n", result);  // Print last two digits with leading zero if necessary
//     return 0;
// }


// #include <stdio.h>

// int main() {
//     unsigned long long n;
//     scanf("%llu", &n);

//     // Calculate the last two digits using modular arithmetic and pattern analysis
//     unsigned long long lastTwoDigits = 25;  // Initialize with the pattern's starting point

//     if (n > 1) {
//         unsigned long long power = n % 4;  // Find the pattern repetition
//         if (power == 0) {
//             power = 4;  // Pattern repeats every 4 powers
//         }
//         lastTwoDigits = (lastTwoDigits * power) % 100;  // Apply the pattern
//     }

//     printf("%02llu\n", lastTwoDigits);  // Print last two digits with leading zero if necessary
//     return 0;
// }


// #include <stdio.h>
// #include <math.h>

// int main()
// {
//     double base, power, result;

//     printf("Enter the base number: ");
//     scanf("%lf", &base);

//     printf("Enter the power raised: ");
//     scanf("%lf",&power);

//     result = pow(base,power);

//     printf("%.1lf^%.1lf = %.2lf", base, power, result%100);

//     return 0;
// }