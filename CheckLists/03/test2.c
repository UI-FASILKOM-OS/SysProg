/*
 * Source: The GNU C Library Reference Manual
 * https://www.gnu.org/software/libc/manual/html_node/Example-of-Getopt.html
 * This program is free script/software. This program is distributed in the 
 * hope that it will be useful, but WITHOUT ANY WARRANTY; without even the 
 * implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * REV01 Mon Sep 16 11:57:52 WIB 2019
 * START Mon Sep 16 10:05:07 WIB 2019
 */

/*
 * Try:  
 *     time ./test2
 *     time ./test2 -n "Cicak bin Kadal"
 *     time ./test2 -n "Cicak bin Kadal" -i 1252504100 -m
 *     time ./test2 -n "Cicak bin Kadal" -i 1252504100 -m -f
 *     time ./test2 -n Cicih -i 1252504100 -f
 *     time ./test2 -n "Cicak bin Kadal" -i 1252504100 -m ABCD XYZZY 
 *      
 */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

int main (int argc, char *argv[])
{
  char *nvalue  = NULL;
  char *ivalue  = NULL;
  int  mflag    = 0;
  int  fflag    = 0;
  int  index;
  int  cc;

  opterr = 0;

  while ((cc = getopt (argc, argv, "n:i:mf")) != -1)
    switch (cc)
      {
      case 'n':
        nvalue = optarg;
        break;
      case 'i':
        ivalue = optarg;
        break;
      case 'm':
        mflag = 1;
        break;
      case 'f':
        fflag = 1;
        break;
      case '?':
        if (optopt == 'n')
          fprintf (stderr, "Option -%c requires an argument.\n", optopt);
        else if (optopt == 'i')
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


  printf ("nvalue = %s ivalue = %s mflag = %d fflag = %d\n", 
           nvalue,     ivalue,     mflag,     fflag);

  for (index = optind; index < argc; index++)
    printf ("Non-option argument %s\n", argv[index]);

  printf("Hello, I am %s. My ID is %s\n", nvalue, ivalue);
  if (mflag == 1) printf ("I am a MALE\n");
  if (fflag == 1) printf ("I am a FEMALE\n");
  return 0;
}

