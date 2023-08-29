//Print //
//Calculation //
//Max Betweeen Three Numbers//
//Voting check//
//table print//
//odd even//
//exit//
#include<stdio.h>
#include<conio.h>
void clrscr(void);
int main()
{
    while(1)
    {
        int ch;
        void clrscr();
        printf("\n\n=================Welcome To Main Menu=================\n");
        printf("\n======================================================\n");
        printf("\n1. Print\n2. Calculations\n3. Max\n4. Eligiblity Check\n5. Table Print\n6. Odd Even\n7. Exit");
        printf("\nEnter Your Choice : ");
        scanf("%d",&ch);
        if(ch==1)
        {
            int age;
            printf("\nEnter Your Age : ");
            scanf("%d",&age);
            printf("\nYour Age is %d",age);
        }
        else if(ch==2)
        {
            int a,b;
            int cho;
            printf("\nEnter Two Numbers : ");
            scanf("%d%d",&a,&b);
            printf("\n1. ADD\t2. SUB\t3. MUL\t4. DIV\nChoice : ");
            scanf("%d",&cho);
            switch(cho)
            {
                case 1:
                    printf("\nAddition = %d",a+b);
                    break; 
                case 2:
                    printf("\nSubtration = %d",a-b);
                    break;
                case 3:
                    printf("\nMultiplication = %d",a*b);
                    break;
                case 4:
                    printf("\nDivision = %d",a/b);
                    break;
                default:
                    printf("\nWrong Input");
            }
        }
        else if(ch==3)
        {
            int a,b,c;
            printf("\nEnter 1st Number : ");
            scanf("%d",&a);
            printf("\nEnter 2nd Number : ");
            scanf("%d",&b);
            printf("\nEnter 3rd Number : ");
            scanf("%d",&c);
            if(a>b && a>c)
                printf("\nNumber %d is Greatest",a);
            else if(b>a && b>c)
                printf("\nNumber %d is Greatest",b);
            else
                printf("\nNumber %d is Greatest",c);
        }
        else if(ch==4)
        {
            int age;
            printf("\nEnter Your Age : ");
            scanf("%d",&age);
            if(age>=18)
                printf("\nEligible");
            else
                printf("\nNot Eligible");
        }
        else if(ch==5)
        {
            int t;
            printf("\nEnter Number for Table Print : ");
            scanf("%d",&t);
            int i=1;
            while(i<=10)
            {
                printf("\n%dX%d=%d",t,i,t*i);
                i++;                        
            }
        }
        else if(ch==6)
        {
            int n;
            printf("\nEnter a Positive Number to Check : ");
            scanf("%d",&n);
            if(n%2==0)
                printf("\nEven");
            else
                printf("\nOdd");
        }
        else if(ch==7)
        {
            printf("\nThanks For Using Our Program\nExiting............");
            break;
        }
        else
            printf("\nWrong input\nPlease Try Again.");
    }
    return 0;
}