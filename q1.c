//Write a program to calculate the length of the string. (without using built-in method)

#include<stdio.h>
int main()
{ 
    int size,count=0;
    printf("enter the size :" );
    scanf("%d",&size);
    fflush(stdin);
    char str[size];
    printf("enter the string : ");
    gets(str);
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    printf("\n length of the string is %d",count);
}
