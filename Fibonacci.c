#include <stdio.h>
int fibo(int n){
    if(n==1 || n==2) return 1;
return fibo(n-1)+fibo(n-2);
}
int main()
{
int a;
printf("Enter a");
scanf("%d",&a);
for(int i=1;i<=a;i++)
{
printf("Fibonacci no. of '%d'th position is %d\n",i,fibo(i));
}}