#include<stdio.h>
int main() {
    FILE*fp;
    char name[50];
    int age;
    float mark;
    fp=fopen("data5.txt","w");
    if(fp == NULL)
    {
    printf("FILE cannot be opened");
    return 1;
    }
    printf("Enter student name: ");
    scanf("%s",name);
    printf("Enter student's age: ");
    scanf("%d",&age);
    printf("Enter student's mark: ");
    scanf("%.1f",&mark);
    fprintf(fp,"%s %d %.1f",name, age, mark);
    fclose(fp);
    fp=fopen("data5.txt","r");
    fscanf("fp,"%s %d %.1f",name, &age, &mark);
    
    printf("\nStudent Details\n");
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
    printf("Mark: %.1f",mark);
    fclose(fp);
    return 0;}
      
    
