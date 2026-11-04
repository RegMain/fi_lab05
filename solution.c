#include "solution.h"

result taylor_series_calculate(double (*f)(double x, int n), double x, double x0) {
  result res;
  res.res = x0;
  res.iter_cnt = 1;
  double next = f(x, res.iter_cnt) * res.res;
  while (next + 1.0 != 1.0) {
    res.res += next;
    res.iter_cnt++;
    next = f(x, res.iter_cnt) * next; 
  }
  return res;
}
