#include <stdio.h>

int fib(int n) {
  if (n == 1){
    return 0;
  }
  if (n == 2){
    return 1;
  }
  return fib(n-1) + fib(n-2);
}

int main(void) {
  int vals[4] = {1, 4, 5, 9};
  for (int i = 0; i < 4; i++) {
    printf("%d\n", fib(vals[i]));
  }
  return 0;
}