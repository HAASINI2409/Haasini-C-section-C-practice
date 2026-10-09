//write a c program to calculate the total bill after applying a discount percentage
#include<stdio.h>
int main()
{
 float a,b,discount,total;
 scanf("%f%f",&a,&b);
 printf("discount= %.2f\n",a*30/100+b*30/100);
 total=a+b-discount;
 printf("total bill= %.2f\n",total);
 return 0;
}
