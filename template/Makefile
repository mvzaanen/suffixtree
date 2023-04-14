COMPILER = g++
DFLAGS = -ansi -pedantic -Wall -g
#LFLAGS = -lstdc++ -Xlinker -rpath /usr/local/arch/gcc-3.2/lib
LFLAGS = -Wl -Xlinker -rpath /usr/local/arch/gcc-3.2/lib
CFLAGS = -c
OFLAGS = -o
EXECNAME = suffixtree
SRCS = main.cpp
OBJS = main.o

suffixtree:	${OBJS}
	${COMPILER} ${DFLAGS} ${LFLAGS} ${OBJS} ${OFLAGS} ${EXECNAME}

.SUFFIXES: .cpp .o
.cpp.o:
	${COMPILER} ${DFLAGS} ${CFLAGS} $<

clean: 
	rm -f *.o 
	rm -f ${EXECNAME}

depend:
	makedepend \
        -I/usr/local/arch/gcc-3.2/include/c++/3.2/ \
        -I/usr/local/arch/gcc-3.2/include/c++/3.2/i686-pc-linux-gnu/ \
        -- $(CFLAGS) -- $(SRCS)
# DO NOT DELETE

main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/iostream
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/i686-pc-linux-gnu/bits/c++config.h
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/i686-pc-linux-gnu/bits/os_defines.h
main.o: /usr/include/features.h /usr/include/sys/cdefs.h
main.o: /usr/include/gnu/stubs.h
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/ostream
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/ios
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/iosfwd
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/bits/stringfwd.h
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/bits/fpos.h
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/i686-pc-linux-gnu/bits/c++io.h
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/cstdio
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/cstddef
main.o: /usr/lib/gcc-lib/i386-redhat-linux/2.96/include/stddef.h
main.o: /usr/include/stdio.h /usr/include/bits/types.h /usr/include/libio.h
main.o: /usr/include/_G_config.h /usr/include/wchar.h
main.o: /usr/include/bits/wchar.h /usr/include/gconv.h
main.o: /usr/lib/gcc-lib/i386-redhat-linux/2.96/include/stdarg.h
main.o: /usr/include/bits/stdio_lim.h
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/i686-pc-linux-gnu/bits/gthr.h
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/i686-pc-linux-gnu/bits/gthr-default.h
main.o: /usr/include/pthread.h /usr/include/sched.h /usr/include/time.h
main.o: /usr/include/bits/sched.h /usr/include/signal.h
main.o: /usr/include/bits/sigset.h /usr/include/bits/pthreadtypes.h
main.o: /usr/include/bits/initspin.h /usr/include/bits/sigthread.h
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/cwchar
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/ctime
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/bits/functexcept.h
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/exception_defines.h
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/exception
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/bits/char_traits.h
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/cstring /usr/include/string.h
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/bits/localefwd.h
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/i686-pc-linux-gnu/bits/c++locale.h
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/clocale /usr/include/locale.h
main.o: /usr/include/bits/locale.h /usr/include/langinfo.h
main.o: /usr/include/nl_types.h /usr/include/iconv.h /usr/include/libintl.h
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/climits /usr/include/limits.h
main.o: /usr/lib/gcc-lib/i386-redhat-linux/2.96/include/limits.h
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/cctype /usr/include/ctype.h
main.o: /usr/include/endian.h /usr/include/bits/endian.h
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/string
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/memory
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/bits/stl_algobase.h
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/cstdlib /usr/include/stdlib.h
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/new
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/bits/stl_pair.h
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/bits/type_traits.h
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/bits/stl_iterator_base_types.h
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/bits/stl_iterator_base_funcs.h
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/bits/concept_check.h
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/bits/stl_iterator.h
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/bits/stl_alloc.h
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/cassert /usr/include/assert.h
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/bits/stl_threads.h
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/bits/stl_construct.h
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/bits/stl_uninitialized.h
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/bits/stl_raw_storage_iter.h
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/bits/stl_function.h
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/bits/basic_string.h
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/i686-pc-linux-gnu/bits/atomicity.h
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/algorithm
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/bits/stl_algo.h
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/bits/stl_heap.h
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/bits/stl_tempbuf.h
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/bits/basic_string.tcc
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/bits/ios_base.h
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/streambuf
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/bits/streambuf.tcc
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/bits/basic_ios.h
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/bits/streambuf_iterator.h
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/bits/locale_facets.h
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/cwctype /usr/include/wctype.h
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/bits/basic_ios.tcc
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/bits/ostream.tcc
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/locale
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/bits/locale_facets.tcc
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/cerrno /usr/include/errno.h
main.o: /usr/include/bits/errno.h /usr/include/linux/errno.h
main.o: /usr/include/asm/errno.h
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/cmath /usr/include/math.h
main.o: /usr/include/bits/huge_val.h /usr/include/bits/mathdef.h
main.o: /usr/include/bits/mathcalls.h
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/bits/cmath.tcc
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/limits
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/i686-pc-linux-gnu/bits/cpu_limits.h
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/typeinfo
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/istream
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/bits/istream.tcc
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/vector
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/bits/stl_vector.h
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/bits/stl_bvector.h
main.o: suffixtree.h /usr/local/arch/gcc-3.2/include/c++/3.2/map
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/bits/stl_tree.h
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/bits/stl_map.h
main.o: /usr/local/arch/gcc-3.2/include/c++/3.2/bits/stl_multimap.h
main.o: suffixtree_inter.h suffixtree_impl.h suffixtree_impl.cpp
