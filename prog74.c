#include<stdio.h>
int main() {
    FILE*fp;
    char str[50];
    fp=fopen("data.txt","r");
    if(fp == NULL){
    printf("FILE open failed");
    return 1;}
    fscanf(fp,"%s",str);
    printf("%s",str);
    return 0;}
