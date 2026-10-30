#include<stdio.h>
int pnz(int a){
    if (a>0)
    printf("a is positive");
    else if (a<0)
    printf("a is negative");
    else 
    printf("a is zero");}
int main() {
    int a;
    scanf("%d",&a);
    pnz(a);
    return 0;}
