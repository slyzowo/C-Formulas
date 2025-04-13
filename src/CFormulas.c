#include <math.h>

const float PI = 3.14159;

// Perimeter

float Perimeter(float sideA, float sideB, float sideC, float sideD){
  float Area;
  Area = sideA + sideB + sideC + sideD;
return Area;
}

float SquarePerimeter(float sideA){
  float Area;
  Area = sideA * 4;
return Area;
}

float CirclePerimeter(float sideA){
  float Area;
  Area = sideA * PI * 2;
return Area;
}

float RectanglePerimeter(float sideA, float sideB){
  float Area;
  Area = sideA + sideB * 2;
return Area;
}

float TrianglePerimeter(float sideA, float sideB, float sideC){
  float Area;
  Area = sideA + sideB + sideC;
return Area;
}