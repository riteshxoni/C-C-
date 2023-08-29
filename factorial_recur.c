#include<stdio.h>
int factorial(int);
int factiteration(int);
int main()
{
    int n,answer,ch;
    printf("\nEnter Number for find : ");
    scanf("%d",&n);
    printf("\n1. Factorial Using Recursion\n2. Factorial using Itiration\nEnter Your Choice : ");
    scanf("%d",&ch);
    if (ch==1)
    {
        answer=factorial(n);
        printf("\nFactorial = %d",answer);
    }
    else if (ch==2) 
    {
        answer=factiteration(n);
        printf("\nFactorial = %d",answer);
    }
    else
    printf("\nWrong Input");
    return 0;
}
int factorial(int n)
{
    int f;
    if (n==0)   
    {
        return 1;
    }
    else
    f=n*factorial(n-1);
    return f;
}
int factiteration(int n)
{
    int i,f=1;
    for(i=0;i<=n;i++)
    {
        f=f*i;
    }
    return f;
}