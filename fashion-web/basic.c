#include<stdio.h>
int main()
{
    int n,i,f=0;
    printf("Enter the number:\n");
    scanf("%d",&n);

    for ( i = 2; i <= n/2; ++i)
    {
        if (n%i==0)
        {
            f=1;
            break;
        }
    }
    if (n==1)
    {
        printf("The nimber is neither a prime number nor a composite\n");       /* code */
    }
    else{
        if (f==0)
        {
            printf("The number is a prime number\n");    /* code */
        }
        else
            printf("The number is not a prime number\n");
    }
 return 0;   
}