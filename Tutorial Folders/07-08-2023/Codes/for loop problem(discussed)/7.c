//Write a Program to input any Number and count the number of digits using for loop
#include<stdio.h>
int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    int count=0;
    for(;num>0;num/=10){
        count++;
    }
    printf("Count is %d",count);
    return 0;
}