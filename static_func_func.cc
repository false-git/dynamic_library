#include "dynamic_test.h"

void static_func_loop() {
  for (int i = 0; i < LOOP_COUNT; i++) {
  }
}

void static_func_func() {
  for (int i = 0; i < LOOP_COUNT; i++) {
    static_func();
  }
}

void static_func_pfunc() {
  for (int i = 0; i < LOOP_COUNT; i++) {
    sf();
  }
}

void static_func_dfunc() {
  for (int i = 0; i < LOOP_COUNT; i++) {
    dynamic_func();
  }
}
