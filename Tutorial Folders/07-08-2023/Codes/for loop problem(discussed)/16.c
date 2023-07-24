//Write a program to input any number and check it is prime or not
#include<stdio.h>
#include<math.h>
int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    //method 1
    /* int count=0;
    for(int i=1;i<=num;i++){
        if(num%i==0) count++;
    }
    count==2?printf("It's a prime number."):printf("It's not a prime number"); */

    //method 2  (less time complexity)
    int count=0;
    for(int i=2;i<=sqrt(num);i++){
        if(num%i==0) count++;
    }
    count==0?printf("It's a prime number."):printf("It's not a prime number");
    return 0;
}
