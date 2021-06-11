#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

char * mitre[] = {  "", "Reconnaissance", "Resource Development","Initial access", "Execution",
                    "Persistence", "Privilege escalation", "Defense evasion",
                    "Credential access", "Discovery", "Lateral movement",
                    "Collection", "Command and control", "Exfiltration", "Impact"};

// char * msg = "Je snapt nu hopelijk dat het niet zo moeilijk is om een tekst te 'obfuscaten'.\nIn dit geval gebruiken we een simpele verschuiving binnen een deel van de ascii-tabel.\nAls je wilt weten wat 'MITRE' betekent, ga dan naar deze site : https://attack.mitre.org/ .";
char * msg2 = "eA NHxHK DJ zBBtzvvv nj| oky rlgu zn kladfbbb _h c` WV^ cSX__ ^N 'WILZWFCUEM'.\neK @DN @{MuA yvrCEvwpx Bm lks wloqekc samm\\`l_k]aY SY]\\RZ POW LLKQ ZDP EE @Q@ED-NxxzB.\nT@F zt GvxA Cn|lt |ew 'OJTQC' _ao_d]ej, \\U WS_ ^PO_ PPdN [PZJ : LWVQS://@RQ{|E.FAKHx.CEw/ .";


void dekryptonite(char * str){
  int x = 0x23;
  size_t len = strlen(str);
  int val;
  for (size_t i = 0; i < len; i++) {
	  val = (int) str[i];
	  if ( val >= 0x40 && val <= 0x7E ) {
		  val -= 0x40;
		  val += x++;
		  while ( x >= 0x3E ) x -= 0x3E;
		  while (val >= 0x3E) val -= 0x3E;
		  val += 0x40;
		  str[i] = (char)val;
		}
	}
}
void kryptonite(char * str){
  int x = 0x23;
  size_t len = strlen(str);
  int val;
  for (size_t i = 0; i < len; i++) {
	  val = (int) str[i];
	  if ( val >= 0x40 && val <= 0x7E ) {
		  val -= 0x40;
		  val -= x++;
		  while ( x >= 0x3E ) x -= 0x3E;
		  while (val < 0 ) val += 0x3E;
		  val += 0x40;
		  str[i] = (char)val;
		}
	}
}

int check(){
  srand (time(NULL));
  int i = 0;
  int num = 1 +  (rand() % ((sizeof(mitre) / sizeof(char*)) -1));
  printf("Geef het 'kolomnummer' van '%s : ",mitre[num]);
  scanf("%d", &i);
  printf("\n");
  return ( num == i );
}

int main(){
  char buf[300];
  strcpy(buf, msg2);

  int val = check();
  if( val ) {
	  dekryptonite(buf);
	}
  printf("%s\n\n",buf);

  return 0;
}
