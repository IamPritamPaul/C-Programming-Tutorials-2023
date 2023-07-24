//Write a program to input lower limit and upper limit and print all the odd numbers in that range.(using for loop)
#include<stdio.h>
int main(){
    int ul,ll;
    printf("Enter lower and upper limit: ");
    scanf("%d%d",&ll,&ul);
    for(int i=ll;i<=ul;i++){
        if(i%2) printf("%d  ",i);
    }
    return 0;
}