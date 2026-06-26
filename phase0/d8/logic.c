#include<stdio.h>
int main()
{
int a=10;
int b=3;
printf("a+b= %d\n", a+b);
printf("a-b= %d\n", a-b);
printf("a*b= %d\n", a*b);
printf("a/b= %d\n", a/b);
printf("a%%b= %d\n", a%b);
if(a>b)
{
printf("a is greater than b\n");
}
else if(a==b)
{
printf("a is equals b\n");
}
else
{
printf("b is greater than a");
}
printf("Counting up: ");
for(int i=0;i<5;i++)
{
printf("%d ", i);
}
printf("\n");
printf("Counting down:");
int count =5;
while(count>0)
{
printf("%d ", count);
count--;
}
printf("\n");
for(int i=0;i<6;i++)
{
if(i%2==0)
{
printf("%d is even\n",i);
}
else
{
printf("%d is odd \n",i);
}
}
return 0 ;
}


