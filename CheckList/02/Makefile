# REV01 Wed Sep 11 13:00:05 WIB 2019
# START Wed Sep 11 12:20:16 WIB 2019
#
# To Compile: make
# To Clean:   make clean

CC=gcc

P01=test1
P02=test2
P03=test3
P04=test4


EXECS= \
   $(P01) \
   $(P02) \
   $(P03) \
   $(P04) \


EXTRA= \
   sltest2 \


all:	seealso $(EXECS) 

.phony: clean all seealso

clean: seealso
	rm -f ${EXECS} ${EXTRA}

seealso:
	@echo "=============================="
	@echo "See also file Checklist02a.pdf"
	@echo "=============================="


