// Write a program to count vowels in a given string
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
    printf("\nyou have entered \"%s\"",str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]=='a'||str[i]=='e'||str[i]=='i'||str[i]=='o'||str[i]=='u')
        count++;
    }
    printf("\noccurance of vowel = %d",count);


}