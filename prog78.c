#include<stdio.h>
int main() {
    FILE*fp1,*fp2;
    char ch;
    fp1=fopen("student.txt","r");
    fp2=fopen("data.txt","w");
    if(fp1 == NULL || fp2 == NULL){
    printf("FILE cannot be opened");
    return 1;}
    while((ch = fgetc(fp1))!=EOF)
    {
    fputc(ch,fp2);
    }
    printf("FILE copied successfully");
    fclose(fp1);
    fclose(fp2);
    return 0;}
