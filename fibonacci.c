#include<stdio.h>
void fiborecursion(int);
void fiboiteration(int);
int main()
{
    int n;
    printf("\nEnter Number of Terms : ");
    scanf("%d",&n);
    int ch;
    printf("\n1. Fibonacci using Recursion\n2. Fibonacci using Iteration");
    scanf("%d",&ch);
    if (ch==1)
    {
        fiborecursion(n);
    }
    else if (ch==2)
    {
        fiboiteration(n);
    }
    else
    printf("\nWrong input");
    return 0;
}