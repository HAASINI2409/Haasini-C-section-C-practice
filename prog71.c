#include<stdio.h>
int main() {
    FILE*fp;
    fp=fopen("student.txt","w");
    if(fp==0){
       printf("FILE cannot be opened");
       return 1;}
    fprintf(fp,"Name:Rithish\n");
    fprintf(fp,"Age:20");
    fclose(fp);
    printf("data written successfully");
    return 0;} 
          
