//to append a new text to an existing file
#include<stdio.h>
int main() {
    FILE*fp;
    fp=fopen("student.txt","a");
    if(fp == NULL){
    printf("FILE CANNOT BE OPENED");
    return 1;}
    fprintf(fp,"\nWelcome to C Programming");
    fclose(fp);
    printf("Character appended successfully");
    return 0;}
    
