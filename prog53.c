#include<stdio.h>
int factorial(int a){
    int i,fact=1;
    for(i=1;i<=a;i++){
    fact=fact*i;}
    printf("%d\n",fact);}
int main() {
    int a;
    scanf("%d",&a);
    factorial(a);}
