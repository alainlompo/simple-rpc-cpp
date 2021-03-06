#include "example_dot.hpp"

double dot_product(const vector<double> & a,
		   const vector<double> & b
		   )
{
  double sum = 0;
  for (int i = 0; i < a.size(); i++)
    sum += a[i] * b[i];
  return sum;
}
