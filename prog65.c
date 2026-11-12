#include<stdio.h>
int main() {
    int n;
    scanf("%d",&n);
    int arr[n];int found=0;
    for(int i=0;i<n;i++){
       scanf("%d",&arr[i]);}
    int key;
       scanf("%d",&key);
    for (int i=0;i<n;i++){
       if(arr[i]==key){
        found++;
        printf("element found index= %d\n",i);}}
       if(found==0){
       printf("not found");}}
