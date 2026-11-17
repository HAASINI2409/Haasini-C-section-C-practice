#include<stdio.h>
int main() {
    FILE*fp;
    char ch;
    int count=0;
    fp=fopen("student.txt","r");
    if(fp == NULL){
    printf("FILE cannot be opened");
    return 1;}
    while((ch = fgetc(fp))!= EOF)
    {
    count++;
    }
    fclose(fp);
    printf("Number of characters: %d",count);
    return 0;}  
