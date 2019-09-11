#include "dynamic_test.h"
#include <chrono>
#include <iostream>

int run(const std::string &name, func f) {
  int t{0};
  std::chrono::system_clock::time_point start, end;
  start = std::chrono::system_clock::now();
  f();
  end = std::chrono::system_clock::now();
  auto elapsed =
      std::chrono::duration_cast<std::chrono::milliseconds>(end - start)
          .count();
  std::cout << name << ": " << elapsed << std::endl;
  return t;
}

int main() {
  run("static_func_loop", static_func_loop);
  run("static_func_func", static_func_func);
  run("static_func_pfunc", static_func_pfunc);
  run("static_func_dfunc", static_func_dfunc);
  run("dynamic_func_loop", dynamic_func_loop);
  run("dynamic_func_func", dynamic_func_func);
  run("dynamic_func_pfunc", dynamic_func_pfunc);
  return 0;
}
