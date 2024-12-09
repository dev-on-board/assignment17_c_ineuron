//Write a program to count the occurrence of a given character in a given string

#include<stdio.h>
int main()
{
    int size,count=0;
    printf("enter size of the string : ");
    scanf("%d",&size);
    fflush(stdin);
    char str[size];
    printf("\nenter the string : ");
    gets(str);
    printf("\nyou have entered %s",str);
    printf("\nenter the character you want to check :");
    char b;
    b=getchar();
    for(int i=0;str[i]!='\0';i++){
        if(str[i]==b)
        count++;
    }
    printf("\noccurance = %d",count);


}