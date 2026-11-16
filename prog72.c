//to create a file and write your information into it using fprintf.
#include<stdio.h>
int main() {
    FILE*fp;
    fp=fopen("student.txt","w");
    fprintf(fp,"Name:Haasini\n");
    fprintf(fp,"Age:18\n");
    fprintf(fp,"College name:Karpagam College of Engineering\n");
    fprintf(fp,"Department:ECE\n");
    fclose(fp);
printf("Data written successfully");
return 0;}
