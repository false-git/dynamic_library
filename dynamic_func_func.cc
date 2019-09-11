#include "dynamic_test.h"

void dynamic_func_loop() {
  for (int i = 0; i < LOOP_COUNT; i++) {
  }
}

void dynamic_func_func() {
  for (int i = 0; i < LOOP_COUNT; i++) {
    dynamic_func();
  }
}

void dynamic_func_pfunc() {
  for (int i = 0; i < LOOP_COUNT; i++) {
    df();
  }
}
