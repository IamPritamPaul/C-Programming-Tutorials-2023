//Write a program to input any number and print twenty numbers in descending order from the number
#include<stdio.h>
int main(){
    int x;
    printf("Enter input: ");
    scanf("%d",&x);
    for(int i = x;i>x-20;i--){
        printf("%d\t",i);
    }
    return 0;
}