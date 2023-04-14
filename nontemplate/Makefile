COMPILER = g++
DFLAGS = -ansi -pedantic -Wall -g
CFLAGS = -c
OFLAGS = -o
EXECNAME = suffixtree
SRCS = main.cpp suffixtree.cpp
OBJS = main.o suffixtree.o

suffixtree:	${OBJS}
	${COMPILER} ${DFLAGS} ${LFLAGS} ${OBJS} ${OFLAGS} ${EXECNAME}

.SUFFIXES: .cpp .o
.cpp.o:
	${COMPILER} ${DFLAGS} ${CFLAGS} $<

clean: 
	rm -f *.o 
	rm -f ${EXECNAME}

veryclean:	clean
	rm -f Makefile.bak

main.o: suffixtree.h iterator.h
suffixtree.o: suffixtree.h
