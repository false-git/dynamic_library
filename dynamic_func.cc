static int t;

using func = int (*)(int);

int dynamic_func(int a) {
  t += a;
  return t;
}

func df = dynamic_func;
