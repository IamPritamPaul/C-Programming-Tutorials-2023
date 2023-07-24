//Write a Program to multiply two positive numbers without using * operator.
#include<stdio.h>
int main(){
    int x,y;
    printf("Enter number and multiplier: ");
    scanf("%d%d",&x,&y);
    for(int i=1;i<y;i++){
        x=x+x;
    }
    printf("%d",x);
    return 0;
}