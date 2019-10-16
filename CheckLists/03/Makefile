# REV01 Mon Sep 16 11:48:37 WIB 2019
# START Mon Sep 16 10:03:15 WIB 2019
#
# To Compile: make
# To Clean:   make clean

CC=gcc

P01=test1
P02=test2
P03=test3
P04=test4
P05=test5


EXECS= \
   $(P01) \
   $(P02) \
   $(P03) \
   $(P04) \
   $(P05) \


EXTRA= \
   dummy \


all:	seealso $(EXECS) 

.phony: clean all seealso

clean: seealso
	rm -f ${EXECS} ${EXTRA}

seealso:
	@echo "=============================="
	@echo "See also file Checklist02a.pdf"
	@echo "=============================="


