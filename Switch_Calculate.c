#include <stdio.h>
#include <math.h>
int main()
{
    int a,b; char ch;
    printf("Enter a,b");
    scanf("%d",&a);
    scanf("%d",&b);
    printf("Enter the operator");
    scanf(" %c",&ch);
    switch (ch)
    {
    case '+':
    printf("Addition : %d",a+b);
    break;
    case '-':
    printf("Substraction : %d",a-b);
    break;
    case '/':
    printf("Division : %f",a/b);
    break;
    case '*':
    printf("Multiplication : %d",a*b);
    break;
    case '^':
    printf("a power b : %f",pow(a,b));
    break;
    default:
    printf("Invalid Operator");
    break;
    }
}