#include<stdio.h>
int main()
{
int x,fac=1;
printf("Enter your number:");
scanf("%d",&x);
int i=x;
while(i>0)
{
fac=fac*i;
i--;
}
printf("Factorial of %d is : %d",x,fac);
return 0;
}