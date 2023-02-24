#include<stdio.h>
float simple_intrest(float principle_amount,float intrest_rate,float intrest_time);
float main()
{
    float principle_amount,intrest_rate,intrest_time,si;
    printf("Enter the principal amount, intrest rate anf time of intrest\n");
    scanf("PA-%f\nIR-%f\nIT-%f",&principle_amount,&intrest_rate,&intrest_time);
    si = simple_intrest(principle_amount,intrest_rate,intrest_time);
    printf("The simple intrest on the principal amount is %f",si);
    return 0;
}
float simple_intrest(float principle_amount,float intrest_rate,float intrest_time)
{
    return (((principle_amount)*(intrest_rate)*(intrest_time))/100);
}