#include <stdio.h>

int main(){
  register int t = 0;
  register int b = 103;
  register int a = 221;
  t = a;
  a = b;
  b = t;
  t *= 4;
  return t;
}

