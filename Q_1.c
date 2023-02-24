#include<stdio.h>
#include<math.h>
float area(float);
float main()
{
    float radius,c;
    printf("Enter the radius of the circle\n");
    scanf("%f",&radius);
    c = area(radius);
    printf("The Area of circle of radius %f is %f.",radius,c);
    return 0;
}
float area(float radius)
{
    return ((3.14)*pow(radius,2));
}