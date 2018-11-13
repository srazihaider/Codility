
#include <math.h>

int solution(int X, int Y, int D) {
  int jumps = ceil(((double)Y-((double)X))/ (double)D);
  return  jumps;
  
}
