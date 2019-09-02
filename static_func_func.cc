int static_func(int);

static int t;

int static_func_func(int a) {
  for (int i = 0; i < 100000000; i++) {
    t = static_func(i);
  }
  return t;
}
