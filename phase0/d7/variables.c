#include <stdio.h>
int main()
{
int score = 100;
int lives = 3;
char grade = 'A';
float temperature = 36.6;
unsigned address = 4294967295;
printf("Score:%d\n", score);
printf("Lives:%d\n", lives);
printf("Grade:%c\n", grade);
printf("Temperature:%f\n", temperature);
printf("Address:%u\n", address);
printf("Score in hex:%x\n", score);
printf("Size of int: %lu bytes\n", sizeof(int));
printf("Size of char: %lu bytes\n", sizeof(char));
printf("Size of float: %lu bytes\n", sizeof(float));
printf("Size of double: %lu bytes\n", sizeof(double));
printf("Size of unsigned int: %lu bytes\n", sizeof(unsigned int));
return 0;
}
