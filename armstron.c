#include <stdio.h>
int main(){
    int a,i,o,e;
    printf("enter any integer here:");
    scanf("%d",&a);
    o=a;
    for(;o>0;){
        i=o%10;
        o=(int)o/10;
        e=e+(i*i*i);
    }
    if (a==e){printf("the given number is armstrong number");}
    else{ printf("the given number is not an armstrong number");}
    return 0;
}