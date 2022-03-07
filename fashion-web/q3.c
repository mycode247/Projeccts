#include<stdio.h>>
int main()
{
    int n,f=0,i;
    printf("Enter the number: \n");
    scanf("%d",&n);
    for ( i = 2; i < n/2; i++)
    {
        if (n%i==0)
        {
            f=1;
            break;
        }
    }
    if (n==1)
    {
        /* code */
        printf("The number is neither a prime number nor a composite\n");
    }
    else{
        if (f==1)
        {
            /* code */
            printf("The number is not a prime number\n");
        }
        else
        printf("The number is a prime number\n");
    }
    return 0;
}