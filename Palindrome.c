#include<stdio.h>
#include<string.h>
void palindrome(char[],char[]);
int main()
{
    char a[50],b[50];
    int i,j=0;
    printf("\nEnter Your String : ");
    gets(a);
    for(i=strlen(a)-1;i>=0;i--)
    {
        b[j]=a[i];
        j++;
    }
    b[j]='\0';
    printf("\nYour String = %s\nReverse = %s",a,b);
    palindrome(a,b);
    return 0;
}
// void palindrome(char a[],char b[])
// {
//     if (strcmp(a,b) == 0)
//     {

//         printf("\nPalindrome.");
//     }
//     else
//         printf("\nNot Palindrome");
// }
void palindrome(char a[],char b[])
{
    int i,flag=0;
    for(i=0;i<=strlen(a);i++)
    {
        if (a[i]!=b[i])
        {
            flag=1;
            break;
        }
    }
    if (flag==0)
        printf("\nString is Palindrome");
    else
        printf("\nString is Not Palindrome");
}