COMPILER = g++
DFLAGS = -ansi -pedantic -Wall -g
CFLAGS = -c
OFLAGS = -o
EXECNAME = suffixtree
SRCS = main.cpp suffixtree_impl.cpp
OBJS = main.o suffixtree_impl.o

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

depend:
	makedepend \
       -I/usr/include/g++-3 \
	-- $(CFLAGS) -- $(SRCS)
# DO NOT DELETE

main.o: /usr/include/g++-3/iostream /usr/include/g++-3/iostream.h
main.o: /usr/include/g++-3/streambuf.h /usr/include/libio.h
main.o: /usr/include/_G_config.h /usr/include/bits/types.h
main.o: /usr/include/features.h /usr/include/sys/cdefs.h
main.o: /usr/include/gnu/stubs.h
main.o: /usr/lib/gcc-lib/i386-slackware-linux/2.95.3/include/stddef.h
main.o: /usr/include/wchar.h /usr/include/bits/wchar.h /usr/include/gconv.h
main.o: /usr/lib/gcc-lib/i386-slackware-linux/2.95.3/include/stdarg.h
main.o: /usr/include/g++-3/string /usr/include/g++-3/std/bastring.h
main.o: /usr/include/g++-3/cstddef /usr/include/g++-3/std/straits.h
main.o: /usr/include/g++-3/cctype /usr/include/ctype.h /usr/include/endian.h
main.o: /usr/include/bits/endian.h /usr/include/g++-3/cstring
main.o: /usr/include/string.h /usr/include/g++-3/alloc.h
main.o: /usr/include/g++-3/stl_config.h /usr/include/g++-3/stl_alloc.h
main.o: /usr/include/stdlib.h /usr/include/assert.h
main.o: /usr/include/g++-3/iterator /usr/include/g++-3/stl_relops.h
main.o: /usr/include/g++-3/stl_iterator.h /usr/include/g++-3/cassert
main.o: /usr/include/g++-3/std/bastring.cc /usr/include/g++-3/vector
main.o: /usr/include/g++-3/stl_algobase.h /usr/include/g++-3/stl_pair.h
main.o: /usr/include/g++-3/type_traits.h /usr/include/limits.h
main.o: /usr/lib/gcc-lib/i386-slackware-linux/2.95.3/include/limits.h
main.o: /usr/lib/gcc-lib/i386-slackware-linux/2.95.3/include/new.h
main.o: /usr/lib/gcc-lib/i386-slackware-linux/2.95.3/include/new
main.o: /usr/lib/gcc-lib/i386-slackware-linux/2.95.3/include/exception
main.o: /usr/include/g++-3/stl_construct.h
main.o: /usr/include/g++-3/stl_uninitialized.h
main.o: /usr/include/g++-3/stl_vector.h /usr/include/g++-3/stl_bvector.h
main.o: suffixtree.h /usr/include/g++-3/map /usr/include/g++-3/stl_tree.h
main.o: /usr/include/g++-3/stl_function.h /usr/include/g++-3/stl_map.h
main.o: /usr/include/g++-3/stl_multimap.h suffixtree_inter.h
main.o: suffixtree_impl.h iterator.h
suffixtree_impl.o: /usr/include/g++-3/iostream /usr/include/g++-3/iostream.h
suffixtree_impl.o: /usr/include/g++-3/streambuf.h /usr/include/libio.h
suffixtree_impl.o: /usr/include/_G_config.h /usr/include/bits/types.h
suffixtree_impl.o: /usr/include/features.h /usr/include/sys/cdefs.h
suffixtree_impl.o: /usr/include/gnu/stubs.h
suffixtree_impl.o: /usr/lib/gcc-lib/i386-slackware-linux/2.95.3/include/stddef.h
suffixtree_impl.o: /usr/include/wchar.h /usr/include/bits/wchar.h
suffixtree_impl.o: /usr/include/gconv.h
suffixtree_impl.o: /usr/lib/gcc-lib/i386-slackware-linux/2.95.3/include/stdarg.h
suffixtree_impl.o: /usr/include/g++-3/string
suffixtree_impl.o: /usr/include/g++-3/std/bastring.h
suffixtree_impl.o: /usr/include/g++-3/cstddef
suffixtree_impl.o: /usr/include/g++-3/std/straits.h /usr/include/g++-3/cctype
suffixtree_impl.o: /usr/include/ctype.h /usr/include/endian.h
suffixtree_impl.o: /usr/include/bits/endian.h /usr/include/g++-3/cstring
suffixtree_impl.o: /usr/include/string.h /usr/include/g++-3/alloc.h
suffixtree_impl.o: /usr/include/g++-3/stl_config.h
suffixtree_impl.o: /usr/include/g++-3/stl_alloc.h /usr/include/stdlib.h
suffixtree_impl.o: /usr/include/assert.h /usr/include/g++-3/iterator
suffixtree_impl.o: /usr/include/g++-3/stl_relops.h
suffixtree_impl.o: /usr/include/g++-3/stl_iterator.h
suffixtree_impl.o: /usr/include/g++-3/cassert
suffixtree_impl.o: /usr/include/g++-3/std/bastring.cc suffixtree_impl.h
suffixtree_impl.o: /usr/include/g++-3/map /usr/include/g++-3/stl_tree.h
suffixtree_impl.o: /usr/include/g++-3/stl_algobase.h
suffixtree_impl.o: /usr/include/g++-3/stl_pair.h
suffixtree_impl.o: /usr/include/g++-3/type_traits.h /usr/include/limits.h
suffixtree_impl.o: /usr/lib/gcc-lib/i386-slackware-linux/2.95.3/include/limits.h
suffixtree_impl.o: /usr/lib/gcc-lib/i386-slackware-linux/2.95.3/include/new.h
suffixtree_impl.o: /usr/lib/gcc-lib/i386-slackware-linux/2.95.3/include/new
suffixtree_impl.o: /usr/lib/gcc-lib/i386-slackware-linux/2.95.3/include/exception
suffixtree_impl.o: /usr/include/g++-3/stl_construct.h
suffixtree_impl.o: /usr/include/g++-3/stl_function.h
suffixtree_impl.o: /usr/include/g++-3/stl_map.h
suffixtree_impl.o: /usr/include/g++-3/stl_multimap.h
suffixtree_impl.o: /usr/include/g++-3/vector
suffixtree_impl.o: /usr/include/g++-3/stl_uninitialized.h
suffixtree_impl.o: /usr/include/g++-3/stl_vector.h
suffixtree_impl.o: /usr/include/g++-3/stl_bvector.h
