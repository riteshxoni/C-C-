#include<stdio.h>
int prime(int);
void pless100();
int main()
{
    int n;
    printf("Enter a Positive Number to check : ");
    scanf("%d",&n);
    if (n>=1)
        if (prime(n)==1)
            printf("\nNumber is Prime");
        else
            printf("\nNumber is Not Prime");
    else
        printf("\nWrong Input");
    pless100();
    return 0;
}
int prime(int a)
{
    int x,count=0;
    for(x=1;x<=a;x++)
    {
        if (a%x==0)
            count++;
        
    }
    if (count==2)
        return 1;
    else
        return 0;
}
void pless100()
{
    printf("\nPrime numbers less than 100:\n");
    for (int num = 2; num < 100; num++)
    {
        if (prime(num)==1)
            printf("%d ", num);
    }
    printf("\n");
}