#include<stdio.h>
int n;
void prime(int n)
{
    int i;
    while(n%2==0)
    {
        printf("2\n");
        n = n/2;
    }
    for(i=3;i<=n;i=i+2)
    {
        while(n%i==0)
        {
            printf("%d\n",i);
            n = n/i;
        }
    }
}
int main()
{
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("The prime factors of %d are :-\n",n);
    prime(n);
    return 0;
}
