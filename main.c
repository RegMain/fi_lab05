#include <stdio.h>
#include "solution.h"
#include <math.h>

double k_arctg(double x, int n) {
  return x * x * ((1 - 2*n) * 1.0) / (1.0 * (2 * n + 1));
}

int main(void) {
  result res;
  double a = 0, b = 0.5;
  int n;
  printf("Input n: ");
  scanf("%d", &n);
  printf("\n");
  printf("+---------+------------------------+-----------------+----------------------+\n");
  printf("|    x    | Taylor series arctg(x) | math.h arctg(x) | Amount of iterations |\n");
  printf("+---------+------------------------+-----------------+----------------------+\n"); 
  for (double x = a; x <= b; x += (b - a) / (1.0 * n)) {
    res = taylor_series_calculate(k_arctg, x, x);
    printf("|%9f|%24f|%17f|%22d|\n", x, atan(x), res.res, res.iter_cnt);
    printf("+---------+------------------------+-----------------+----------------------+\n");
  }
  return 0;
}
