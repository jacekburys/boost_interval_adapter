#include <stdio.h>
#include "float_interval.h"

int main(){
  
  float_interval_t inter1;
  inter1.lower = 1.0f;
  inter1.upper = 1.0f;

  for(int i = 0; i < 10000000; i++) {
//    printf("%f %f\n", inter1.lower, inter1.upper);
    float_interval_t tmp;
    tmp.lower = 10.0f;
    tmp.upper = 10.0f;
    inter1 = add_float_interval(inter1, tmp);
    if(inter1.upper > inter1.lower) {
      printf("%f %f\n", inter1.lower, inter1.upper);
    }
  }
  printf("%f %f\n", inter1.lower, inter1.upper);
/*
  float_interval_t inter2;
  inter2.lower = -2.3f;
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
*/
  return 0;
}
