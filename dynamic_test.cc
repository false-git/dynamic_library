#include <chrono>
#include <iostream>

using func = int (*)(int);

int static_func(int);
int static_func_func(int);
int dynamic_func(int);
int dynamic_func_func(int);

int run(const std::string &name, int count, func f) {
  int t;
  std::chrono::system_clock::time_point start, end;
  start = std::chrono::system_clock::now();
  for (int i = 0; i < count; i++) {
    t = f(i);
  }
  end = std::chrono::system_clock::now();
  auto elapsed =
      std::chrono::duration_cast<std::chrono::milliseconds>(end - start)
          .count();
  std::cout << name << ": " << elapsed << std::endl;
  return t;
}

int main() {
  run("static_func", 100000000, static_func);
  run("dynamic_func", 100000000, dynamic_func);
  run("static_func_func", 1, static_func_func);
  run("dynamic_func_func", 1, dynamic_func_func);
  return 0;
}
