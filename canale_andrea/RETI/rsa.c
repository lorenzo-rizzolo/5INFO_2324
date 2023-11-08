#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stddef.h>
#include <errno.h>
#include <fenv.h>

int main() {
  char *frase = "BYTE";
  int npub = 13;
  int N = 85;
  int c,ascii;
  
  for(int i = 0; i < strlen(frase); i++) {
    ascii = (int)frase[i];
    printf("Ascii = %i\n", ascii);
    long double x = powl(ascii,npub);
    printf("X = %Lf\n", x);
    c = fmod(x, N);
    printf("C = %i\n", c);
  }
  
  return 0;
}