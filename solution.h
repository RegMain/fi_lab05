#pragma once

typedef struct {
  double res;
  int iter_cnt;
} result;

result taylor_series_calculate(double (*f)(double x, int n), double x, double x0);
