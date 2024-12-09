//Write a program to convert a given string into lowercase
#include<stdio.h>
int main(){
    int size;
    printf("enter the size :");
    scanf("%d",&size);
    fflush(stdin);
    char str[size];
    printf("enter the string : ");
    gets(str);
    printf(" the string you have entered is \"%s\"\n",str );
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='A' && str[i]<='Z'){
            str[i]=str[i]+32;
        }
    }
    for(int i=0;str[i]!='\0';i++){
        printf("%c",str[i]);
        }
}