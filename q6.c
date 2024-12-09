//Write a program to reverse a string
#include<stdio.h>
int main(){
    int size,count=0,i=0,j;
    printf("enter the size :");
    scanf("%d",&size);
    fflush(stdin);
    char str[size],t;
    printf("enter the string : ");
    gets(str);
    printf(" the string you have entered is \"%s\"\n",str );
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    j=count-1;
    while(i<=j){
        t=str[i];
        str[i]=str[j];
        str[j]=t;
        i++;
        j--;
    }
   printf("%s",str);     
}    