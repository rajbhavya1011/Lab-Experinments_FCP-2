#include <stdio.h>
int increament(int* a){
    return *a+1;
}
int decreament(int* a){
    return *a-1;
}
int adding(int* a){
    return *a+5;
}
int subtracting(int* a){
    return *a-5;
}
int Subtract(int* a, int* b) 
{
    return *a-*b;;
}
int main() {
    int x = 10, y = 20;
    printf("Increament: %d\n",increament(&x));
    printf("Decreament: %d\n",decreament(&y));
    printf("Adding: %d\n",adding(&x));
    printf("Subtracting: %d\n",subtracting(&x));
    printf("Subtract: %d\n",Subtract(&x,&y));
}