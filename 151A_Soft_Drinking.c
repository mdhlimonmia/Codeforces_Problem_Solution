#include<stdio.h>
int main(){
    int n, k, l, c, d, p, nl, np;
    scanf("%d %d %d %d %d %d %d %d", &n, &k, &l, &c, &d, &p, &nl, &np);
    // printf("%d %d %d %d %d %d %d %d",n, k, l, c, d, p, nl, np);
    int t1, t2, t3;
    t1 = (k*l)/nl;
    t2 = c*d;
    t3 = p/np;
    int min = (t1 < t2)? ((t1 < t3)? t1 : t3) :((t2 < t3)? t2 : t3);
    // printf("%d %d %d %d",t1, t2, t3, min);
    printf("%d\n", min/n);
}