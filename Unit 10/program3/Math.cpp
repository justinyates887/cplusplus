#include "Math.h"
#include <iostream>
#include <string>
using namespace std;

//Sum takes two floating point parameters and returns the sum of the pair.
float Sum(float a, float b){
  return a + b;
}

//Area claculates and returns the area of a rectangle
float Area(float length, float width){
  return length * width;
}

//Slope calculated the slope of four caridnal points using the m=y2-y1/x2/x1 formula
float Slope(float x1, float x2, float y1, float y2){
  return (y2-y1)/(x2-x1);
}