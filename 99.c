#include <stdio.h>
int main(){
    int j;
    int i;
    for(j=1;j<=9;j++){
        for(i=1;i<=9;i++){
            printf("%d*%d=%2d  ",i,j,i*j);
            }
        printf("\n");
    }
    return 0;
}