//terminal operators
#include<stdio.h>
int main() {
    int age;
    scanf("%d",&age);
   // if(age>=18){
   // printf("you can vote");}
   // else{ printf("you cannot vote");}
    
    (age>=18)?printf("you can vote"):printf("you cannot vote");
    return 0;}
    
    //syntax
    //(condition)?expr1:expr2;
    //return 0;
    
    //not an alternate of if else condition
    //
