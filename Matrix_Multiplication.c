#include <stdio.h>
int main()
{
    int a[2][2], b[2][2], c[2][2];
    printf("Enter 1st array of 2X2\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
    scanf("%d",&a[i][j]);
    }}
    printf("Enter 2nd array of 2X2\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
    scanf("%d",&b[i][j]);
    }}
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
        int sum = 0;
            for (int k=0; k<2; k++) {
                sum = sum + (a[i][k] * b[k][j]);
                }
                c[i][j] = sum;
            }
    }
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
            printf("%d ",c[i][j]);
    }
    printf("\n");
    }
}