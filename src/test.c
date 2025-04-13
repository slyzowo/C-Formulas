#include <stdio.h>
#include "libs/CFormulas.c"

int main(){

  int num = 4;

  float result1 = SquarePerimeter(num);
  float result2 = CirclePerimeter(num);
  float result3 = RectanglePerimeter(num, num);
  float result4 = TrianglePerimeter(num, num, num);

  printf("%f \n", result1);
  printf("%f \n", result2);
  printf("%f \n", result3);
  printf("%f \n", result4);

  return 0;
}