//Write a program to input any number and the factors of that number.
#include<stdio.h>
int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    printf("The factors are :- ");
    for(int i = 1;i<=num;i++){
        if(num%i==0){
            printf("%d\t",i);
        }
    }
    return 0;
}