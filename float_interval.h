
typedef struct float_interval {
  float lower;
  float upper;
} float_interval_t;

#ifdef __cplusplus
extern "C" {
#endif
  float_interval_t add_float_interval(float_interval_t in1, float_interval_t in2);
  float_interval_t sub_float_interval(float_interval_t in1, float_interval_t in2);
  float_interval_t mul_float_interval(float_interval_t in1, float_interval_t in2);
  float_interval_t div_float_interval(float_interval_t in1, float_interval_t in2);
#ifdef __cplusplus
}
#endif
