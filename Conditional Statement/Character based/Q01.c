#include<stdio.h>
int main(){
    char ch;
    scanf("%c",&ch);
    if(ch=='a'||ch=='e'||ch=='i'||ch=='o'||ch=='u'||ch=='A'||ch=='E'||ch=='I'||ch=='O'||ch=='U'){
        printf("The Given Character is Vowel");
    }
    else
        printf("The Given Character is Consonant");
    return 0;
}