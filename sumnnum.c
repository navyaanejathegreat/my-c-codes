#include <stdio.h>
int main(){
    int hehe,num,i;
    printf("enter any integer:");
    scanf("%d",&num);
    i=1;
    do{
        i=i+1;
        hehe=hehe+i;
    }
    while(i<=num);
    printf("sum of all natural numbers till %d is: %d",num,hehe);
    return 0;
}