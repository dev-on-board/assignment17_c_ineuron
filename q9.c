//Write a C program to sort a string array in ascending order
#include<stdio.h>
int main(){
    int size,count=0;
    printf("enter the size of the string : ");
    scanf("%d",&size);
    fflush(stdin);
    char str[size];
    printf("enter the string : ");
    gets(str);
    for(int i=0;str[i]!='\0';i++){
        count++;
    }
    printf("length is %d\n",count);
    for(int i=0;i<count;i++){
        for(int j=i+1;j<=count;j++){
            if(str[i]>str[j]){
                int temp=str[i];
                str[i]=str[j];
                str[j]=temp;
            }
        }
    }
    printf("ascending order is : ");
    for(int i=0;i<count;i++){
        printf("%c ",str[i]);
    }
}