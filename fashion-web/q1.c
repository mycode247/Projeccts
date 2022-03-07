#include<stdio.h>
int main()
{
    int n,i,j,a[10];
    printf("Enter the number: \n");
    scanf("%d",&n);
    printf("Binary number o the decimal number %d is\n",n);
    for ( i = 0; n>0; i++)
    {
        a[i]=n%2;
        n=n/2;
    }
    
    for ( j=i-1; j>=0; j--)
    {
        printf("%d",a[j]);
    }
    
    return 0;
}