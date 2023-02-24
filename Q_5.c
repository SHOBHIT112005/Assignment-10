#include<stdio.h>
int n;
void odd(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        if(i%2!=0)
        {
            printf("%d\n",i);
        }
    }
}
int main()
{
    printf("Enter a number\n");
    scanf("%d",&n);
    if(n%2==0)
    {
        printf("The first %d odd numbers are:-\n",(n-(n/2)));
        odd(n);
    }
    else
    {
        printf("The first %d odd numbers are:-\n",(n-((n-1)/2)));
        odd(n);
    }
    return 0;
}