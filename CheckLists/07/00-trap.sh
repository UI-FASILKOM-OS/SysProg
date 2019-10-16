#!/bin/bash
# START Wed Oct 16 10:37:12 WIB 2019

trap "echo This is sent by 01-send-signal.sh " USR2

echo "This is PID $$"

while [ 1 -gt 0 ]; do
   echo "While loop..."
   sleep 3;
done

exit 0


