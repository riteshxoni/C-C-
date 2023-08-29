#include<stdio.h>
#include<string.h>
#include<ctype.h>
void cncstring(char[],char[]);
void compstring(char[],char[]);
void rev(char[]);
void upper(char[]);
void lower(char[]);
int main()
{
    char a[100],b[100];
    int ch;
    for(;ch!=6;)
    {
        printf("\n==========String Task Menu==========");
        printf("\n1. Concatenate\n2. Compare\n3. Reverse\n4. Uppercase\n5. Lowercase\n6. Exit");
        printf("\nEnter Your Choice : ");
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
                printf("\nEnter First String : ");
                scanf("%s",&a);
                printf("\nEnter Second String : ");
                scanf("%s",&b);
                cncstring(a,b);
                break;
            case 2:
                printf("\nEnter First String : ");
                scanf("%s",&a);
                printf("\nEnter Second String : ");
                scanf("%s",&b);
                compstring(a,b);
                break;
            case 3:
                printf("\nEnter Your String : ");
                scanf("%s",&a);
                rev(a);
                break;
            case 4:
                printf("\nEnter Your String in Lowercase : ");
                scanf("%s",&a);
                upper(a);
                break;
            case 5:
                printf("\nEnter Your String in Uppercase : ");
                scanf("%s",&a);
                lower(a);
                break;
            case 6:
                printf("\nExiting....\nThanks for using...\n");
                break;
            default:
                printf("\nWrong input :\nReturning To Main");
        }
    }
}
void cncstring(char a[],char b[])
{
    strcat(a,b);
    printf("\nConcatenate Strings = %s",a);
}
void compstring(char a[],char b[])
{
    int result;
    result = strcmp(a,b);
    if (result==0)
        printf("\nEqual");
    else
        printf("\nNot Equal");
}
void rev(char a[])
{
    char b[100];
    int i,j=0;
    for(i=strlen(a)-1;i>=0;i--)
    {
        b[j]=a[i];
        j++;
    }
    b[j]='\0';
    printf("\nReverse Order of String = %s",b);
}
void upper(char a[])
{
    for(int i=0;i<=strlen(a);i++)
    {
        a[i]=toupper(a[i]);
    }
    printf("\nString in Uppercase : %s",a);
}
void lower(char a[])
{
    for(int i=0;i<strlen(a);i++)
    {
        a[i]=tolower(a[i]);
    }
    printf("\nString in Lowercase = %s",a);
}