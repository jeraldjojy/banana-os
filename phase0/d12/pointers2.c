#include<stdio.h>
int main()
{
int nums[5]={10,20,30,40,50};
int *p=nums;
printf("----Pointer arithmetic---\n");
for (int i =0;i < 5;i++)
{
printf("p+%d = address %p, value = %d\n",i, (p+i), *(p+i));
}
printf("\n---Array vs pointer access---\n");
for(int i=0;i<5;i++)
{
printf("num[%d]=%d *(num+%d)=%d\n",i,nums[i],i,*(nums+i));
}
printf("\n--- Hardware memory simulation ---\n");
char screen[20];
char *vga = screen;
vga[0] = 'B';
vga[1] = 'a';
vga[2] = 'n';
vga[3] = 'a';
vga[4] = 'n';
vga[5] = 'a';
vga[6] = '\0';

printf("Screen buffer contains: %s\n", screen);
printf("\n--- sizeof pointer vs array ---\n");
printf("sizeof(nums) = %lu\n", sizeof(nums));
printf("sizeof(p) = %lu\n", sizeof(p));
return 0;
}
