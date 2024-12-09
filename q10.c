//Write a program in C to Find the Frequency of Characters.

#include<stdio.h>
int main(){
    int size,count=0;
    printf("enter the size of the string : ");
    scanf("%d",&size);
    fflush(stdin);
    char str[size];
    printf("enter the string : ");
    gets(str);
    int freq[150]={0};
    int i=0;
    while(str[i]!='\0'){
        freq[str[i]]++;
        i++;
    }
    for(int i=0;i<150;i++){
        if(freq[i]>0){
            printf("%c - %d\n",i,freq[i]);
        }
    }
}