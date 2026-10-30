#include<stdio.h>
int largest3(int a,int b,int c){
    if (a>b && a>c){
    printf("a is largest");}
    else if (b>c && b>a) {
    printf("b is largest");}
    else {
    printf("c is largest");}}
int main() {
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    largest3(a,b,c);
    return 0;}
