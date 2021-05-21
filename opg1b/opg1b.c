#include <stdio.h>
int schakelaar = 0;

int main(){
  if(schakelaar) {
	  printf( "schakelaar staat op TRUE !! \n");
	} else {
	  printf( "schakelaar staat op FALSE !! \n");
	}
  return schakelaar;
}

