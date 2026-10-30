#include<stdio.h>
int largest(int a,int b){
    if(a>b){
    printf("a is largest");}
    else {
    printf("b is largest");}}
int main() {
    int a,b;
    scanf("%d%d",&a,&b);
    largest (a,b);
    return 0;}
