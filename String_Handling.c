#include <stdio.h>
#include <string.h>
void main()
{
    char a[100];
    //Palindrome
    printf("Enter a String:\n");
    scanf("%s",&a);
    char b[100];
    strcpy(b,a);
    strrev(b);
    if(strcmp(a,b)==0)
    printf("This is a palindrome string\n");
    else
    printf("This is not a palindrome string\n");
    //Length of string
    printf("%d\n",strlen(b));
    //Concat
    printf("%s\n",strcat(b,a));
}