#include<stdio.h>
#include<string.h>

int main(){
    int n, i, result = 0;
    scanf("%d",&n);
    char str[n][20];
    for(i=0; i<n; i++){
        scanf("%s",str[i]);
    }
    for(i=0; i<n; i++){
        if(!strcmp(str[i],"Tetrahedron")){
            result +=4;
        }
        else if(!strcmp(str[i],"Cube")){
            result +=6;
        }
        else if(!strcmp(str[i],"Octahedron")){
            result +=8;
        }
        else if(!strcmp(str[i],"Dodecahedron")){
            result +=12;
        }
        else if(!strcmp(str[i],"Icosahedron")){
            result +=20;
        }
    }
    printf("%d\n",result);
    return 0;
}