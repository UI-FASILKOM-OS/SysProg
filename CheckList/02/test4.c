/*
 * Source: The GNU C Library Reference Manual
 * https://www.gnu.org/software/libc/manual/html_node/Example-of-Getopt.html
 * This program is free script/software. This program is distributed in the 
 * hope that it will be useful, but WITHOUT ANY WARRANTY; without even the 
 * implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * START Wed Sep 11 13:04:29 WIB 2019
 */

/*
 * Try:  
 *     ./test4
 *     ./test4 -a 
 *     ./test4 -b 
 *     ./test4 -a -b -c VALUE 
 *     ./test4 -d DODOL
 */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main (int argc, char *argv[])
{
  int aflag    = 0;
  int bflag    = 0;
  char *cvalue = NULL;
  int  index;
  int  cc;

  opterr = 0;

  while ((cc = getopt (argc, argv, "abc:")) != -1)
    switch (cc)
      {
      case 'a':
        aflag = 1;
        break;
      case 'b':
        bflag = 1;
        break;
      case 'c':
        cvalue = optarg;
        break;
      case '?':
        if (optopt == 'c')
          fprintf (stderr, "Option -%c requires an argument.\n", optopt);
        else if (isprint (optopt))
          fprintf (stderr, "Unknown option `-%c'.\n", optopt);
        else
          fprintf (stderr,
                   "Unknown option character `\\x%x'.\n",
                   optopt);
        return 1;
      default:
        abort ();
      }


  printf ("aflag = %d, bflag = %d, cvalue = %s\n",
          aflag, bflag, cvalue);

  for (index = optind; index < argc; index++)
    printf ("Non-option argument %s\n", argv[index]);
  return 0;
}

