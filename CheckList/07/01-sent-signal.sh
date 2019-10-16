#!/bin/bash
# START Wed Oct 16 10:37:12 WIB 2019

PID=$1
[ "${PID}XX" == "XX" ] && {
   echo "What PID?"
   read PID
}

while [ 1 -gt 0 ] ; do
   echo "kill -USR2 $PID"
   kill -USR2 $PID
   sleep 5
done

exit 0

