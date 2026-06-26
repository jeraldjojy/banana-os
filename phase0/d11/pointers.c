#include<stdio.h>
void set_to_zero(int *x);
void swap(int *a, int *b);
int main()
{
int score = 95;
printf("score =%d\n",score);
printf("Value at p =%p\n", &score);
int *p = &score;
printf("p holds address =%p\n", p);
printf("value at p =%d\n",*p);
*p=100;
printf("score after *p=100: %d\n",score);
set_to_zero(&score);
printf("score after set_to_zero:%d\n",score);
int a =5;
int b=10;
printf("before swap: a=%d b=%d\n",a,b);
swap(&a,&b);
printf("after swap:a=%d b=%d\n",a,b);
return 0;
}
void set_to_zero(int *x)
{
*x =0;
}
void swap(int *a,int*b)
{
int temp=*a;
*a=*b;
*b=temp;
}
