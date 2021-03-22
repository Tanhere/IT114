#include <stdio.h>
int main()
{
  int n, r = 0;

  printf("Input any integer: ");
  scanf("%d", &n);
//until zero//
  while (n != 0)
  {
    r = r * 10;
    r = r + n%10;
    n = n/10;
  }

  printf("Reversed = %d \n" , r);

  return 0;
}


    