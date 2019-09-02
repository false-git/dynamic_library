static int t;

using func = int (*)(int);

int static_func(int a) {
  t += a;
  return t;
}

func sf = static_func;
