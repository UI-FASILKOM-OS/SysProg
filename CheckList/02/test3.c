/*
 * Copyright (C) 2016-2019 Rahmat M. Samik-Ibrahim
 * http://rahmatm.samik-ibrahim.vlsm.org/
 * This program is free script/software. This program is distributed in the 
 * hope that it will be useful, but WITHOUT ANY WARRANTY; without even the 
 * implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * REV03 Wed Sep 11 12:59:36 WIB 2019
 * REV02 Tue Aug 28 13:31:19 WIB 2018
 * START Tue Sep 13 12:11:09 WIB 2016
 */

/*
 * Try:  ./test3 111 222 333 444 555
 */

#include <stdio.h>
void main(int argc, char *argv[]) {
   int ii;
   printf("The value of argc    is %d\n", argc);
   printf("=============================================\n");
   for (ii=argc-1; ii >= 0; ii--) {
      printf("The value of argv[%d] is %s\n", ii, argv[ii]);
   }
   printf("=============================================\n");
}


