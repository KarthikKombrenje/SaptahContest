#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int main(){
    int array[10][10], count=0, countzero=0, n, max=0;
    printf("N=");
    scanf("%d", &n);
    for (int i=0; i<n; i++){
        for (int j=0; j<n; j++){
            scanf("%d", &array[i][j]);
        }
    }
    for (int i=0; i<n; i++){
        countzero = 0;
        for (int j=0; j<n; j++){
            if (array[j][i] == 0){
                countzero++;

            }
        }
        if (countzero > count){
            max = i;
            count = countzero;
        }

    }
    printf("\n%d", max);
    return 0;
}
