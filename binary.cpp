#include <iostream>
#include <string.h>

using namespace std;

void IntToBinary(int n, char * p) {
  char * pStr = p;

  if (NULL == p) {
    return;
  }
  do {
    n % 2 == 0 ? *p = '0' : *p = '1';
    p++;
    n /= 2;
  } while (n > 0);
  *p = '\0';
  _strrev(pStr);
}


int main() {
  
  char b[100];
  for (int i = 0; i < 256; i++) {
    IntToBinary(i, b);
    printf("%d = %s\n", i, b);
  }

  return 0;
}