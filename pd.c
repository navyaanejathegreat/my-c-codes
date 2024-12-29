#include <stdio.h>
int POW(int a, int b)
{
 int c;
 
 for(c=1;c<=b;c++)
 {
    c=a*c;
 } 
 return a;
}
int main(){
    int num,tempnum,tempnum2,i,d,e,tempi;
    int newnum=0;
    printf("enter any integer:");
    scanf("%d",&num);
    num=tempnum;
    num=tempnum2;
    for(i=1;tempnum<1;i++)
    {
        tempnum=tempnum/10;
    }
    //i is the number of digits in the integer entered
    i=tempi;
    for(e=1;e<=i;tempi--)
    {
        d=tempnum2%(POW(10,e));
        newnum=d*(POW(10,tempi))+newnum;
    }
    printf("the palindrome of given integer is:%d",newnum);
    if(newnum==num)
    {
        printf("the given number is a palindrome");
    }
    else
    {
        printf("given number is not a palindrome");
    }
    return 0;
}
