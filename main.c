#include <stdio.h>
#include "float_interval.h"

int main(){
  
  float_interval_t inter1;
  inter1.lower = 1.1f;
  inter1.upper = 1.9f;

  float_interval_t inter2;
  inter2.lower = 2.3f;
  inter2.upper = 5.2f;

  float_interval_t inter3; 

  inter3 = add_float_interval(inter1, inter2);
  printf("%f %f\n", inter3.lower, inter3.upper);

  inter3 = sub_float_interval(inter1, inter2);
  printf("%f %f\n", inter3.lower, inter3.upper);

  inter3 = mul_float_interval(inter1, inter2);
  printf("%f %f\n", inter3.lower, inter3.upper);
  
  inter3 = div_float_interval(inter1, inter2);
  printf("%f %f\n", inter3.lower, inter3.upper);

  return 0;
}
