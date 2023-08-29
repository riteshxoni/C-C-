#include<stdio.h>
void alterc(int *,int *);
int main()
{
    int a,b;
    printf("Enter Two Numbers : ");
    scanf("%d%d",&a,&b);
    printf("Before Changes : 1st = %d & 2nd = %d",a,b);
    alterc(&a,&b);
    printf("\nAfter Changes : 1st = %d & 2nd = %d",a,b);
    return 0;
}
void alterc(int *p,int *q)
{
    *p=18;
    *q=22;
}
