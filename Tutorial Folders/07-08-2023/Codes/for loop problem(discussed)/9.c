//Write a program to input any number and print the multiplication table of that number.
#include<stdio.h>
int main(){
    int x;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    for(int i =1;i<11;i++){
        printf("%d * %d = %d\n",x,i,x*i);
    }
    return 0;
}