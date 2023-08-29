#include<stdio.h>
int main()
{
    int a,b,*p,*q;
    printf("Enter 1st Number : ");
    scanf("%d",&a);
    printf("\nEnter 2nd Number : ");
    scanf("%d",&b);
    p=&a;//1
    q=&b;//2
    *p=*p+*q;//1+2=3
    *q=*p-*q;//3-2=1
    *p=*p-*q;//3-1=2
    printf("\nAfter Swaping 1st No. = %d & 2nd No. = %d",*p,*q);
    return 0;
}