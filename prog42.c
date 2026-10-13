//write a program to add two numbers
//#include<stdio.h>
//int main() {
   //  int a,b;
   //  scanf("%d%d",&a,&b);
   //  printf("%d",a+b);
     //printf("%d",a-b);
    // scanf("%d%d",&a,&b);
     //printf("%d",a+b);
     //printf("%d",a-b);
     //scanf("%d%d",&a,&b);
     //printf("%d",a+b);
     //printf("%d",a-b);
    // printf("Hello");
    // scanf("%d%d",&a,&b);
    // printf("%d",a+b);
    // printf("%d",a-b);
    // scanf("%d%d",&a,&b);
    // printf("%d",a+b);
     //printf("%d",a-b);
     
    // return 0;}
     //functions
            //predefined-printf(),scanf()
            //user-defined functions
            
            
     #include<stdio.h>
     int add(int x,int y){
         printf("%d\n",x+y);//function body
     }
     
     //actual prarmeters(a,b)
     //formal parameters(x,y)
     
     int sub(int x,int y){
     printf("%d\n",x-y);}
     
     int checkAAndB(int x,int y){
     printf("%d\n",x==y);}
     
     int main() {
         int a,b;scanf("%d%d",&a,&b);
         add(a,b);
         sub(a,b);
         checkAAndB(a,b);
         return 0;}//call
     
            
