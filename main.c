#include <stdio.h>
#include "solution.h"
#include <math.h>

double k_arctg(double x, int n) {
  return x * x * ((1 - 2*n) * 1.0) / (1.0 * (2 * n + 1));
}

int main(void) {
  result res;
  res = taylor_series_calculate(k_arctg, 0.5, 0.5);
  printf("arctg(%f) = %f (math.h function)\n", 0.5, atan(0.5));
  printf("arctg(%f) = %f (took %d iteration(s).)\n", 0.5, res.res, res.iter_cnt);
  return 0;
}
