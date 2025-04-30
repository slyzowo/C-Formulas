const float PI = 3.14159;

// Perimeter
float Perimeter(float sideA, float sideB, float sideC, float sideD){
  float result = sideA + sideB + sideC + sideD;
return result;
}

float SquarePerimeter(float sideA){
  float result = sideA * 4;
return result;
}

float CirclePerimeter(float sideA){
  float result = sideA * PI * 2;
return result;
}

float RectanglePerimeter(float sideA, float sideB){
  float result = (sideA + sideB) * 2;
return result;
}

float TrianglePerimeter(float sideA, float sideB, float sideC){
  float result = sideA + sideB + sideC;
return result;
}

// Area
float SquareArea(float sideA){
  float result = sideA * sideA;
return result;
}

float CircleArea(float sideA){
  float result = PI * sideA * sideA;
return result;
}

float SphereArea(float sideA){
  float result = 4 * PI * sideA * sideA;
return result;
}

float RectangleArea(float sideA, float sideB){
  float result = sideA * sideB;
return result;
}

float RhombusArea(float sideA, float sideB){
  float result = (sideA * sideB) / 2;
  return result;
}

float TrapezoidArea(float sideA, float sideB, float sideC){
  float result = ((sideA + sideB) / 2) * sideC;
return result;
}

float TriangleArea(float sideA, float sideB){
  float result = .5 * sideA * sideB;
return result;
}