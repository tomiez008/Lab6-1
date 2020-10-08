#include <stdio.h>
//#include <conio.h>
int main(void)
{
  int i;
  float Sum=0;
  for (i=1;i<=100;i++)

	{
    Sum = Sum + i*i;
  }
  
  printf("Sum of 1 squares to 100 squares is %f\n",Sum);
  
  //getch();
  return 0;
}
