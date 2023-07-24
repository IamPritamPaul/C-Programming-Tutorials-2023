//Write a program to input any numbers and find the factorial of that number.(using for loop) 
#include<stdio.h>
int main(){
    int x;
    printf("Enter any number: ");
    scanf("%d",&x);
    unsigned long int fact=1;
    for(int i = 1;i<=x;i++){
        fact*=i;
    }
    printf("%u",fact);
    return 0;
}