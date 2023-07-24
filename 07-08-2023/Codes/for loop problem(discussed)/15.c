//Write a program to input any number and count the number of factors of that number.
#include<stdio.h>
int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    int count=0;
    for(int i = 1;i<=num;i++){
        if(num%i==0){
            // printf("%d\t",i);
            count+=1;
        }
    }
    printf("Number of factors: %d",count);
    return 0;
}