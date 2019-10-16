/*
 * Source: https://stackoverflow.com/questions/
 *         3554120/open-directory-using-c
 * This program is free script/software. This program is distributed in the 
 * hope that it will be useful, but WITHOUT ANY WARRANTY; without even the 
 * implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 *
 * REV01 Mon Sep 16 11:57:19 WIB 2019
 * START Mon Sep 16 11:11:03 WIB 2019
 */

/*
 * See: opendir(), readdir(), closedir().
 *	
 * Try:  
 *     time ./test4 .
 *     time ./test4 ..
 *     time ./test4 [another directory]
 */

#include <stdio.h>
#include <dirent.h>

int main (int c, char *v[]) {
   struct dirent *pDirent;
   DIR *pDir;

   if (c < 2) {
      printf ("Usage: testprog <dirname>\n");
      return 1;
   }
   pDir = opendir (v[1]);
   if (pDir == NULL) {
      printf ("Cannot open directory '%s'\n", v[1]);
      return 1;
   }

   while ((pDirent = readdir(pDir)) != NULL) {
      printf ("[%s]\n", pDirent->d_name);
   }
   closedir (pDir);
   return 0;
}

