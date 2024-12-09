//Write a program to convert a given string into uppercase
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
    printf("\nyou have entered \"%s\"\n",str);
    for(int i=0;str[i]!='\0';i++){
        if(str[i]>='a'&&str[i]<='z'){
           str[i]=str[i]-32;
        }
        
    }
    printf("the uppercase is : ");
    for(int i=0;str[i]!='\0';i++){

       printf("%c",str[i]);        
    }
    


}