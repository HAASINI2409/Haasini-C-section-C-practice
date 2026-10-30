#include<stdio.h>
int main() {
    char ch;
    scanf("%c",&ch);
    if((ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u')||(ch=='A'|| ch=='E' || ch=='I' || ch=='o' || ch=='U')){
    printf("vowel");}
    else if  ((ch>='a'&& ch<='z') || (ch>='A'&&ch<='Z')){
    printf("consonant");}
    else {
    printf("not a character");}
    return 0;}
