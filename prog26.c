  //categorize the students grade based on their marks #include<stdio.h>
int main() {
   int mark;
   scanf("%d",&mark);
   if (mark>=90 && mark<=100){
   printf("A Grade");}
   else if(mark<90 && mark>=70){
   printf("B Grade");}
   else if(mark<70 && mark>=50){
   printf("C Grade");}
   else if (mark<50 && mark>=0){
   printf("D Grade");}
   else {
   printf("F Grade");}
   return 0;}
