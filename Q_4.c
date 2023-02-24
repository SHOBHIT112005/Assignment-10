#include<stdio.h>
int n;
void number(int n)
{
    int i;
    for(i=1;i<=n;i++)
    {
        printf("%d\n",i);
    }
}
int main()
{
    printf("Enter a number\n");
    scanf("%d",&n);
    printf("The first %d natural numbers are:-\n",n);
    number(n);
    return 0;
}