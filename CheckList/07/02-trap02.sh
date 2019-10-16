#!/bin/bash
# START Wed Oct 16 11:16:58 WIB 2019

exit_with_grace() {
   echo "Exit by SIGNAL USR1"
   exit 0
}

trap "echo This is sent by 03-send-signal03.sh " USR2
trap "exit_with_grace" USR1 TERM QUIT

echo "This is PID $$"

while [ 1 -gt 0 ]; do
   echo "While loop..."
   sleep 3;
done

exit 0


