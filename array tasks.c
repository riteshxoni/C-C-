// WAP to perform following actions on an array entered by the user:
// i. Print the even-valued elements
// ii. Print the odd-valued elements
// iii. Calculate and print the sum and average of the elements of array
// iv. Print the maximum and minimum element of array
// v. Remove the duplicates from the array
// vi. Print the array in reverse order 
#include<stdio.h>
void even(int[],int);
void odd(int[],int);
void sumavg(int[],int);
void maxmin(int[],int);
void rmdup(int[],int);
void rev(int[],int);
int main()
{
    int size;
    printf("Enter Size of Array : ");
    scanf("%d",&size);
    int a[size],i;
    for ( i = 0; i < size; i++)
    {
        printf("Enter Value for a[%d] = ",i);
        scanf("%d",&a[i]);
    }
    printf("\nYour Array Elements are : \n");
    for(i=0;i<size;i++)
    {
        printf("%d\t",a[i]);
    }
    int ch;
    printf("\n1> Show even values\n2> Show odd values\n3> Sum & Average\n4> MAX & MIN\n5> Remove Duplicates\n6> Reverse order\nEnter Your Choice : ");
    scanf("%d",&ch);
    if (ch==1)
    {
        even(a,size);
    }
    else if (ch==2)
    {
        odd(a,size);
    }
    else if (ch==3)
    {
        sumavg(a,size);
    }
    else if (ch==4)
    {
        maxmin(a,size);
    }
    else if (ch==5)
    {
        rmdup(a,size);
    }
    else if (ch==6)
    {
        rev(a,size);
    }
    else
    printf("\nWrong Input");
    return 0;
}
void even(int a[],int size)
{
    printf("\nEven Numbers are : \n");
    for(int i=0;i<size;i++)
    {
        if(a[i]%2==0)
            printf("%d\t",a[i]);
    }
}
void odd(int a[],int size)
{
    printf("\nOdd Numbers are : \n");
    for(int i=0;i<size;i++)
    {
        if(a[i]%2!=0)
            printf("%d\t",a[i]);
    }
}
void sumavg(int a[],int size)
{
    float avg,sum;
    for(int i=0;i<size;i++)
    {
        sum += a[i];
    }
    avg=sum/size;
    printf("\nSum = %f\nAvarage = %f",sum,avg);
}
void maxmin(int a[],int size)
{
    int i,max=a[0],min=a[0],ch;
    printf("Enter 1> MAX || 2> MIN\nEnter Your Choice : ");
    scanf("%d",&ch);
    if (ch==1)
    {
        for(i=1;i<size;i++)
        {
            if (max<a[i])
            max=a[i];
        }
        printf("\nMax = %d",max);
    }
    else if(ch==2)
    {
        for(i=1;i<size;i++)
        {
            if (min>a[i])
            min=a[i];
        }
    printf("\nMIN = %d",min);
    }
    else
    printf("\nWrong input");
}
void rmdup(int a[],int size)
{
    int i,j,k;
    for(i=0;i<size;i++)
    {
        for(j=i+1;j<size;j++)
        {
            if (a[i]==a[j]) 
            {
                for(k=j;k<size;k++)
                {
                    a[k]=a[k+1];
                }
                size--;
                j--;
            }
            
        }
    }
    printf("\nElemnents are after deletion = ");
    for(i=0;i<size;i++)
    {
        printf("%d\t",a[i]);
    }
}
void rev(int a[],int size)
{
    int i;
    printf("\nArray in reverse order = ");
    for(i=size-1;i>=0;i--)
    {
        printf("\t%d",a[i]);
    }
}
