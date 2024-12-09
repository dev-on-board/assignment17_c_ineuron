//Write a program in C to count the total number of alphabets, digits and special characters in a string.

#include<stdio.h>
int main(){
    int size,count1=0,count2=0,count3=0,i=0,j;
    printf("enter the size :");
    scanf("%d",&size);
    fflush(stdin);
    char str[size],t;
    printf("enter the string : ");
    gets(str);
    printf(" the string you have entered is \"%s\"\n",str );
    for(int i=0;str[i]!='\0';i++){
        if((str[i]>='a'&& str[i]<='z')||(str[i]>='A'&&str[i]<='Z'))
        count1++;
        else if(str[i]>='0'&&str[i]<='9')
        count2++;
        else
        count3++;
    }
    printf("alphabets -%d",count1);
    printf("\ndigits - %d",count2);
    printf("\nspecial characters -%d",count3);
         
}    
