#include<stdio.h>
int main(){
    //increment
    /* for(int i=0;i<10;i++){
        printf("%d) Sreya Nath\n",i+1);
    } */

    /* int i=0;
    for(;i<10;i++){
        printf("%d) Sreya Nath\n",i+1);
    } */

    /* int i=0;
    for(;;i++){
        if(i==10) break;
        printf("%d) Sreya Nath\n",i+1);
    } */

    /* int i=0;
    for(;;){
        if(i==10) break;
        printf("%d) Sreya Nath\n",i+1);
        ++i;
    } */

    /* for(char ch='A';ch<='J';ch++){
        printf("%d. Sreya Nath\n",ch-'A'+1);
    } */

    //decrement
    for(int i=10;i;i--){
        printf("%d\t",i);
    }
    return 0;
}