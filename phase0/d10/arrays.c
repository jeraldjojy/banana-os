#include<stdio.h>
int main()
{
int scores[5]= {95,87,73,100,60};
int length = sizeof(scores)/sizeof(scores[0]);
printf("scores:\n");
for(int i=0;i< length;i++)
{
printf("scores[%d]=%d\n", i, scores[i]);
}
int highest = scores[0];
for(int i = 1;i < length;i++)
{
if(scores[i]>highest)
{
 highest = scores[i];
}
}
printf("Highest score: %d\n", highest);
char os_name[]="Banana";
printf("OSname:%s\n", os_name);
printf("length of name:\n");
int char_count = 0;
for(int i = 0; os_name[i] !='\0';i++)
{
printf("os_name[%d] =%c\n", i, os_name[i]);
char_count++;
}
printf("Total characters: %d\n", char_count);
 printf("sizeof(scores) = %lu bytes\n", sizeof(scores));
    printf("sizeof(os_name) = %lu bytes\n", sizeof(os_name));

    return 0;
}
