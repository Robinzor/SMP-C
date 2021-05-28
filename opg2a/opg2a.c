#include <stdio.h>

int main(){
  register int x = 0;
  register int y = 1;
  y *= 2;
  x+= 4;
  x *=y;
  return x;
}
