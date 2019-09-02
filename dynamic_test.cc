#include <chrono>
#include <iostream>

using func = int (*)(int);

int static_func(int);
int static_func_func(int);
int static_func_pfunc(int);
int dynamic_func(int);
int dynamic_func_func(int);
int dynamic_func_pfunc(int);

int run(const std::string &name, int pc, int cc, func f) {
  int t{0};
  std::chrono::system_clock::time_point start, end;
  start = std::chrono::system_clock::now();
  for (int i = 0; i < pc; i++) {
    t += f(cc + i);
  }
  end = std::chrono::system_clock::now();
  auto elapsed =
      std::chrono::duration_cast<std::chrono::milliseconds>(end - start)
          .count();
  std::cout << name << ": " << elapsed << std::endl;
  return t;
}

int main() {
  run("static_func", 100000000, 1, static_func);
  run("dynamic_func", 100000000, 1, dynamic_func);
  run("static_func_func", 1, 100000000, static_func_func);
  run("dynamic_func_func", 1, 100000000, dynamic_func_func);
  run("static_func_pfunc", 1, 100000000, static_func_pfunc);
  run("dynamic_func_pfunc", 1, 100000000, dynamic_func_pfunc);
  return 0;
}
