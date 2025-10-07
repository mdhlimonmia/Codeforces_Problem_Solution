#include<stdio.h>
#include<math.h>

const int mx = 123;
int x[mx], y[mx];
int main(){
    int n;
    scanf("%d", &n);

    for(int i = 0; i<n; i++){
        scanf("%d %d", &x[i], &y[i]);
    }
    double ans = 0;
    for(int i = 0; i<n; i++){
        for(int j = 0; j<n; j++){
            double x1 = x[i], y1 = y[i], x2 = x[j], y2 = y[j];
            double len = sqrt((x2-x1)*(x2-x1) + (y2-y1)*(y2-y1));
            if(len>ans)ans = len;
        }
    }
    printf("%.10lf", ans);
    return 0;
}

