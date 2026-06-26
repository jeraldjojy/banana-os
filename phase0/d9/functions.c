#include<stdio.h>
int add(int a,int b);
int multiply(int a, int b);
void print_banner(void);
int is_even(int n);
void show_stack_idea(int depth);
int main()
{
print_banner();
int x = 10;
int y = 4;
printf("add(%d, %d) =%d\n",x, y, add(x, y));
printf("multiply(%d, %d)= %d\n",x, y, multiply(x, y));
for(int i=1; i<=6;i++)
{
if(is_even(i))
{
printf("%d is even\n", i);
}
else
{
printf("%d is odd\n", i);
}
}
printf("\n-----Call stack demo___\n");
show_stack_idea(3);
return 0;
}

int add(int a, int b)
{
return a+b;
}
int multiply(int a, int b)
{
return a*b;
}
void print_banner(void) {
    printf("===================\n");
    printf("=== Banana OS   ===\n");
    printf("===================\n");
}
int is_even(int n)
{
return n%2 ==0;
}
void show_stack_idea(int depth)
{
printf("Entering level %d\n", depth);
if (depth > 0)
{
show_stack_idea(depth - 1);
}
printf("leaving level %d\n", depth);
}
