#include<stdio.h>
int main() {
    int n;
    int even=0;int odd=0;
    scanf("%d",&n);
    int arr[n];
    for (int i=0;i<n;i++){
        scanf("%d",&arr[i]);}
    for (int i=0;i<n;i++){
        if(arr[i]%2==0){
        even++;}
    else {
        odd++;}}
    printf("even count= %d\n",even);
    printf("odd count= %d",odd);}
       
