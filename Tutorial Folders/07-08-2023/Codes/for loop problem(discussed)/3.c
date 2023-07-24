//Write a program to input ‘n’ and find the sum of n natural numbers.(using for loop) 
#include<stdio.h>
#include<math.h>
int main(){
    int n;
    printf("Enter input: ");
    scanf("%d",&n);
    if(n<0){
        printf("Input should be positive.\nSo we are cosidering the modulus value of the input.\n");
        n*=(-1);
    }
    int sum=0;
    for(int i=1;i<=n;i++){
        sum+=i;
    }
    printf("Sum is : %d",sum);
    return 0;
}


/*
n=9
sum=0
1+2+3+4+5+6+7+8+9
*/