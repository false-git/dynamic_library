int static_func(int);

using func = int (*)(int);
extern func sf;

static int t;

int static_func_func(int a) {
  for (int i = 0; i < a; i++) {
    t += static_func(i);
  }
  return t;
}

int static_func_pfunc(int a) {
  for (int i = 0; i < a; i++) {
    t += sf(i);
  }
  return t;
}
