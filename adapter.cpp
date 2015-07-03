#include <boost/numeric/interval.hpp>
#include "float_interval.h"

using namespace boost::numeric;
using namespace interval_lib;
typedef interval<float> I;

I struct_to_interval(float_interval_t in){
  I result(in.lower, in.upper);
  return result;
}

float_interval_t interval_to_struct(I in){
  float_interval_t result = {in.lower(), in.upper()};
  return result;
}


float_interval_t add_float_interval(float_interval_t in1, float_interval_t in2){
  return interval_to_struct(struct_to_interval(in1) + struct_to_interval(in2));
}

float_interval_t sub_float_interval(float_interval_t in1, float_interval_t in2){
  return interval_to_struct(struct_to_interval(in1) - struct_to_interval(in2));
}

float_interval_t mul_float_interval(float_interval_t in1, float_interval_t in2){
  return interval_to_struct(struct_to_interval(in1) * struct_to_interval(in2));
}

float_interval_t div_float_interval(float_interval_t in1, float_interval_t in2){
  return interval_to_struct(struct_to_interval(in1) / struct_to_interval(in2));
}
