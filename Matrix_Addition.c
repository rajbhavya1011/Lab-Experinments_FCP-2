#include <stdio.h>
int main()
{
    int a[2][2], b[2][2];
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
    printf("MAtrix addition of both matrices\n");
    for(int i=0;i<2;i++){
        for(int j=0;j<2;j++){
    printf("%d ",(a[i][j]+b[i][j]));
    }
    printf("\n");
    }
}