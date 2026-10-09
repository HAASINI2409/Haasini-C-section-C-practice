//to calculate the final salary after adding a given bonus percentage
#include<stdio.h>
int main(){
 float salary,bonus,finalsalary;
 scanf("%f",&salary);
 bonus= salary*50/100;
 finalsalary=bonus+salary;
 printf("%.2f\n",salary);
 printf("%.2f\n",bonus);
 printf("%.2f\n",finalsalary);
 return 0;
}
