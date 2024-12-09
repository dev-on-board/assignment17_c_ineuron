//Write a program in C to copy one string to another string

#include<stdio.h>
int main(){
    int size,count=0;
    printf("enter the size :");
    scanf("%d",&size);
    fflush(stdin);
    char str1[size],str2[size],t;
    printf("enter the string : ");
    gets(str1);
    printf(" the string you have entered is \"%s\"\n",str1 );
    for(int i=0;i<size;i++){
        str2[i]='\0';
        str2[i]=str1[i];
    }
    printf("%s",str2);
   

}    

