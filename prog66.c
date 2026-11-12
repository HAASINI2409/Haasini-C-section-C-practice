#include<stdio.h>
int main() {
    int n;
    printf("Enter n: ");
    scanf("%d",&n);
    int arr[n];
    int sum=0;
    printf("Enter the elements: ");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);}
    for(int i=0;i<n;i++){
       if(arr[i]>0){
       	sum+=arr[i];}}
       	printf("sum of positive elements: %d\n",sum);}
       	
