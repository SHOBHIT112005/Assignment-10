#include<stdio.h>
int evdd(int x);
int main()
{
    int x,c;
    printf("Enter a number\n");
    scanf("%d",&x);
    c = evdd(x);
    return 0;
}
int evdd(int x)
{
    if(x%2==0)
    {
        printf("The given number is even.");
        return 1;
    }
    else
    {
        printf("The given number is odd.");
        return 0;
    }
}