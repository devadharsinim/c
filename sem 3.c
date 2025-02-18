#include<stdio.h>
int sum(int,int);
int sub(int,int);
int prod(int,int);
float div(float,float);
int mod(int,int);
int sqrt(int);
int sum(int a,int b)
{
return a+b;
}
int sub(int a,int b)
{
 return a-b;
}
int prod(int a,int b)
{
 return a*b;
}
float div(float a,float b)
{
 return a/b;
}
int mod(int a,int b)
{
 return a%b;
}
int sqrt(int a)
{
 return a*a;
}
int main()
{
 int a,b;
 printf("Enter the number : ");
 scanf("%d",&a);
 printf("Enter the number : ");
 scanf("%d",&b);
 printf("\nThe sum of %d and %d : %d ",a,b,sum(a,b));
 printf("\nThe subtract of %d and %d : %d ",a,b,sub(a,b));
 printf("\nThe product of %d and %d : %d ",a,b,prod(a,b));
 printf("\nThe division of %d and %d : %.2f ",a,b,div(a,b));
 printf("\nThe Modulus of %d and %d : %d ",a,b,mod(a,b));
 printf("\nThe square of %d : %d ",a,sqrt(a));
 printf("\nThe square of %d : %d ",b,sqrt(b));
 return 0;
}

