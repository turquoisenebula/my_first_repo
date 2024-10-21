// practical 7: code to find out the average of 3 numbers

#include<stdio.h>

int main()
{
    float num1,num2,num3,avg;
    printf("enter the numbers whose average is required to be calculated:   ");
    scanf("%f%f%f",&num1,&num2,&num3);
    avg=(num1+num2+num3)/3;
    printf("average of %f , %f and %f is %f",num1,num2,num3,avg);
    return 0;
}
