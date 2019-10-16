#!/bin/bash
# START Wed Oct 16 11:54:15 WIB 2019

# CTRL-C 
trap ctrl_c INT

ctrl_c() {
        echo ""
        echo "** Trapped CTRL-C"
}

echo "(LOOP 10) HIT CTRL-C"
for II in `seq 1 10`; do
    echo -n "$II"
    sleep 1
done
echo ""

exit 


