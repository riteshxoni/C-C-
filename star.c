#include<stdio.h>
void starp(int);
int main()
{
    int n;
    printf("Enter Number of Lines : ");
    scanf("%d",&n);
    starp(n);
    return 0;
}
void starp(int n)
{
    int i,b,j;
    i=1;
    while(i<=n)
    {
        printf("\n");
        b=1;
        while(b<=n-i)
        {
            printf(" ");
            b++;
        }
        j=1;
        while(j<=i*2-1)
        {
            printf("*");
            j++;
        }
        i++;
    }
}