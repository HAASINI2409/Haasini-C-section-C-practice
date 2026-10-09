#include <stdio.h>
int main() {
 int mark;
 scanf("%d",&mark);
 if (mark<=100&&mark>=80) {
 printf("grade A");}
 else if(mark<80&&mark>=50){
 printf("grade B");}
 else{printf("fail");}}
