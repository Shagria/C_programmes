#include <stdio.h>

int main(void) {
  int a, b, c;
  char z, t;
  if( scanf(" rgb %c %d , %d , %d %c",&t, &a, &b, &c, &z) !=5 || a > 255 || a <0 || b > 255 || b <0 || c > 255 || c <0 || z !=')' || t !='(')
  {
    printf("Nespravny vstup.\n");
    return 1;
  }
   printf("#%02X%02X%02X\n", a, b, c );
  return 0;
}