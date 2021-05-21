#include <stdio.h>
char * msg ="hello world!";

void toon(char * tekst){
  printf("%s\n", tekst);
}

int main(){
  toon(msg);
  return 1;
}