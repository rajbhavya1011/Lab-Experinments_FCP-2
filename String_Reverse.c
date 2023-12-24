#include<stdio.h>
int main()
{
    char str[100], rev[100]; int len=0, j;
    printf("Enter a String\n");
    scanf("%s",&str);
    while(str[len]!='\0'){
        len++;
    }
    for(int i=len-1 ,j=0 ;i>=0 ; i--,j++)
    {
        rev[j] = str[i];
    }
    rev[len]='\0';
    printf("Reversed String is %s\n",rev);

}