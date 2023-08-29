//sum of n
//sum digit of given
//factorial
//reverse
//palindrome
#include<stdio.h>
int main()
{
    int limit=0;
    while(limit<=5)
    {
        int ch;
        printf("\n===================Program Control Menu===================\n");
        printf("\n1.\t\tSum of N");
        printf("\n2.\t\tSum of digit");
        printf("\n3.\t\tFactorial");
        printf("\n4.\t\tReverse A Number");
        printf("\n5.\t\tPalindrome");
        printf("\n6.\t\tExit");
        printf("\n\t\tEnter Your Choice : ");
        scanf("%d",&ch);
        if(ch==1)
        {
            int n,i=1,sum=0;
            printf("\nEnter value of : ");
            scanf("%d",&n);
            while(i<=n)
            {
                sum=sum+i;
                i++;
            }
            printf("\nSum of N = %d",sum);
        }
        else if(ch==2)
        {
            int n,digit=0,sum=0;
            printf("\nEnter value of : ");
            scanf("%d",&n);
            while(n>0)
            {
                digit=n%10;
                sum=sum+digit;
            }
            printf("\nSum of digit = %d",sum);
        }
        else if(ch==3)
        {
            int n,fact=1;
            printf("\nEnter value of n : ");
            scanf("%d",&n);
            while(n>0)
            {
                fact=fact*n;
                n--;
            }
            printf("\nFactorial = %d",fact);
        }
        else if(ch==4)
        {
            int n,rev=0;
            printf("\nEnter value of n : ");
            scanf("%d",&n);
            printf("\nYour Number is %d",n);
            while(n>0)
            {
                rev=(rev*10)+n%10;
                n=n/10;
            }
            printf("\nReverse of your number = %d",rev);
        }
        else if(ch==5)
        {
            int n,rev=0,n_copy;
            printf("\nEnter value for n : ");
            scanf("%d",&n);
            n_copy=n;
            while(n>0)
            {
                rev=(rev*10)+n%10;
                n=n/10;
            }
            if(n_copy==rev)
            {
                printf("\nPalindrome Number");
            }
            else
            {
                printf("\nNot Palindrome");
            }
        }
        else if(ch==6)
        {
            printf("\nThanks for using our program");
            break;
        }
        else
        {
            printf("\nWrong Input Please Try again");
            limit++;
        }
    }
}