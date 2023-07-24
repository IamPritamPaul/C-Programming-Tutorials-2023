//Write a Program to input an integer and find out the sum of all the digits of that number (using for loop).
#include<stdio.h>
int main(){
    int x;
    printf("Enter input: ");
    scanf("%d",&x);
    int sum = 0;
    for(;x>0;x/=10){
        sum+=x%10;
    }
    printf("Sum is %d",sum);
    return 0;
}