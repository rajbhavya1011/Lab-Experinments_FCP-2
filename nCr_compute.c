#include<stdio.h>
int fact(int n)
{
    if(n==1)
    return 1;
    return n*fact(n-1);
}
float nCr(int n, int r)
{
    return fact(n)/(fact(n-r)*fact(r));
}
void main()
{
    int n,r;
    printf("Enter n and r");
    scanf("%d",&n);
    scanf("%d",&r);
    printf("%f",nCr(n,r));
}