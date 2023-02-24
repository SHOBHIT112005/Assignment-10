#include<stdio.h>
int n,r;
int f1(int n,int r)
{
    int i,j;
    j = n-r;
    for(i = j-1;i>=1;i--)
    {
        j = j*i;
    }
    return (j);
}
int f2(int n)
{
    int i;
    for(i=n-1;i>=1;i--)
    {
        n = n*i;
    }
    return n;
}
int f3(int r)
{
    int i;
    for(i=r-1;i>=1;i--)
    {
        r = r*i;
    }
    return r;
}
int main()
{
    printf("Enter the total objects (n) and number of objects to be selected(r)\n");
    scanf("%d\n%d",&n,&r);
    int x = f1(n,r);
    int y = f2(n);
    int z = f3(r);
    printf("The number of combinations are :- %d",(y)/(x*z));
    return 0;
}