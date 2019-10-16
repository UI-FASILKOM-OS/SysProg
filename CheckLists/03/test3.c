/*
 * Source: The GNU C Library Reference Manual
 * https://www.gnu.org/software/libc/manual/html_node/Example-of-Getopt.html
 * This program is free script/software. This program is distributed in the 
 * hope that it will be useful, but WITHOUT ANY WARRANTY; without even the 
 * implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
 * REV01 Mon Sep 16 10:36:23 WIB 2019
 * START Mon Sep 16 10:36:23 WIB 2019
 */

/*
 * Try:  
 *     time ./test3 -p
 *     time ./test3 -c
 */

#include <ctype.h>
#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <sys/types.h>


int main (int argc, char *argv[])
{
  int  pflag    = 0;
  int  cflag    = 0;
  int  index;
  int  cc;

  opterr = 0;

  while ((cc = getopt (argc, argv, "pc")) != -1)
    switch (cc)
      {
      case 'p':
        pflag = 1;
        break;
      case 'c':
        cflag = 1;
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


  printf ("pflag = %d cflag = %d\n", pflag,     cflag);

  for (index = optind; index < argc; index++)
    printf ("Non-option argument %s\n", argv[index]);


  if (fork() == 0) {
     if (cflag == 1 ) printf("I am the  child. PID = %d PPID = %d\n", getpid(), getppid());
  } else {
     if (pflag == 1 ) printf("I am the parent. PID = %d PPID = %d\n", getpid(), getppid());
  }
}

