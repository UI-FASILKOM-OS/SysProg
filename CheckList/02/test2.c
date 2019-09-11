// Wed Sep 11 12:34:34 WIB 2019
// Filename:   test2.c
// To compile: gcc -o test2 test2.c
// To run:     time ./test2


#include <stdio.h>

void main (void) {
   for (int ii=0; ii<5; ii++) {
      printf("Hello, this is a loop test\n");
      for (int jj=0; jj<1000000; jj++)
         ;
   }
}

