#include <stdio.h>
int main(){
    int a;
    printf("enter any integer:");
    scanf("%d",&a);
    a%2==0 ? printf("it is even \n it is divisble by two \n it is a multiple of two") : printf("it is not even\n");
    return 0;
}