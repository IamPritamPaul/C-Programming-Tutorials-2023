//Write a program to input any number and check if it is perfect or not 
#include<stdio.h>
int main(){
    int num;
    printf("Enter any number: ");
    scanf("%d",&num);
    int sum=0;
    for(int i = 1;i<num;i++){
        if(num%i==0){
            // printf("%d\t",i);
            sum = sum+i;
        }
        
    }
    // printf("Sum is %d\n",sum);
    /* if (sum==num){
        printf("It is a perfect number");
    }
    else printf("Not a perfect number"); */
    sum==num?printf("It is a perfect number"):printf("Not a perfect number");
    return 0;
}