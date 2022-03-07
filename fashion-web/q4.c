#include<stdio.h>
int main()
{
    int n,rev=0,rem;
    printf("Enter the number\n");
    scanf("%d",&n);
    while (n!=0)
    {
        /* code */
        rem=n%10;
        rev=rev*10+rem;
        n=n/10;
    }
    printf("The reverse number is %d \n",rev);
    return 0;
}