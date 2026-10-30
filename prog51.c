#include<stdio.h>
int oddoreven(int a){
    if (a%2==0){
    printf("a is even");}
    else {
    printf("a is odd");}}
int main() {
    int a;
    scanf("%d",&a);
    oddoreven(a);
    return 0;}
