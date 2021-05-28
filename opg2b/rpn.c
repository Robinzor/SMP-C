#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define STACKSIZE 50       // max stack size [ deze wordt niet 'bewaakt' ! ]
#define TOKENCOUNT 50      // max aantal tokens in de RPN berekening.

int stack[STACKSIZE];
int stackpointer = 0;       // wijst naar de eerste vrije plaats op de stack

char * tokens[TOKENCOUNT];

void initialize(){
  for (size_t i = 0; i < TOKENCOUNT; i++) {
	  tokens[i] = NULL;
	}
  for (size_t i = 0; i < STACKSIZE; i++) {
	  stack[i] = 0;
	}
  stackpointer = 0;
}

void push(int val){
  stack[stackpointer++] = val;
}

int pop(){
  stackpointer--;
  return stack[stackpointer];
}

void processToken(const char * item){
  int oldval1, oldval2;
  int newval = atoi(item);
  if ( newval != 0 ) {
	  push(newval);
	} else {
	  oldval2 = pop();
	  oldval1 = pop();
	  if (strcmp(item,"+") == 0 ) push( oldval1 + oldval2 );
	  if (strcmp(item,"-") == 0 ) push( oldval1 - oldval2 );
	  if (strcmp(item,"/") == 0 ) push( oldval1 / oldval2 );
	  if (strcmp(item,"*") == 0 ) push( oldval1 * oldval2 );
	}
}

void getTokens(char * berekening){
  size_t cnt = 0;
  char * ptr;
  ptr = strtok(berekening, " ");
  while ( ptr != NULL ) {
	  tokens[cnt++] = ptr;
	  ptr = strtok(NULL, " ");
	}
}

int main( int argc, char * argv[]){
  // haal de berekening op van de cmd line en 'knip' in afzonderlijke tekens
  getTokens(argv[1]);

  // verwerk elk teken volgens de afspraak van rpn.
  for (size_t i = 0; i < TOKENCOUNT; i++) {
	  if (tokens[i] == NULL) break;
	  processToken(tokens[i]);
	}

  // geef een foutmelding , als de berekening niet correct is verlopen
  if (stackpointer != 1) {
	  printf("fout in berekening\n");
	  exit(1);
	}

  // geef de uitkomst
  printf("uitkomst = %d\n",stack[0]);
  return 0;
}
