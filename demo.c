#include <stdio.h>
#include "src/CFormulas.c"

int main(){

  int num = 4;

  float result1 = SquarePerimeter(num);
  printf("square perimeter : %f \n", result1);

  float result2 = CirclePerimeter(num);
  printf("circle perimeter : %f \n", result2);

  float result3 = RectanglePerimeter(num, num);
  printf("rect perimeter : %f \n", result3);

  float result4 = TrianglePerimeter(num, num, num);
  printf("triangle perimeter : %f \n", result4);

  float result5 = SquareArea(num);
  printf("square area : %f \n", result5);

  float result6 = CircleArea(num);
  printf("circle area : %f \n", result6);

  float result7 = SphereArea(num);
  printf("sphere area : %f \n", result7);

  float result8 = RhombusArea(num, num);
  printf("rhombus area : %f \n", result8);

  float result9 = TrapezoidArea(num, num, num);
  printf("trapezoid area : %f \n", result9);

  return 0;
}