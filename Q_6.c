#include<stdio.h>
int n;
int fact(int n)
{
    int i;
    for(i=n-1;i>=1;i--)
    {
        n = n*i;
    }
    return n;
}
int main()
{
    printf("Enter a number\n");
    scanf("%d",&n);
    int x = fact(n);
    printf("The factorial of entered number is %d",x);
    return 0;
}