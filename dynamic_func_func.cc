int dynamic_func(int);

using func = int (*)(int);
extern func df;

static int t;

int dynamic_func_func(int a) {
  for (int i = 0; i < a; i++) {
    t += dynamic_func(t + i);
  }
  return t;
}

int dynamic_func_pfunc(int a) {
  for (int i = 0; i < a; i++) {
    t += df(t + i);
  }
  return t;
}
