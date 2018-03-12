#include <stdio.h>
#include <math.h>
void main()
{
  float num1, num2, rem;
 
  printf("First Number?\n");
  scanf("%f%",&num1);
  printf("Second Number?\n");
  scanf("%f",&num2);
 
  rem = fmod(num1,num2);
 
  printf("%.2f divided by %.2f is remainder %.2f\n", num1, num2, rem);
 
 
  getchar();
  return 0;
}
