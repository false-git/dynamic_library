int dynamic_func(int);

static int t;

int dynamic_func_func(int a) {
  for (int i = 0; i < 100000000; i++) {
    t = dynamic_func(i);
  }
  return t;
}
