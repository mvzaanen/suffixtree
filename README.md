# PURPOSE OF THIS PACKAGE

The suffix tree package contains the implementation of a suffix tree
in C++. Ukkonen's (1995) algorithm for building a suffix tree is
implemented. The description of this algorithm was taken from chapter
6 in Gusfield (1997). When the comment found in the source code refers
to Gusfield, it refers to (Gusfield 1997).


# INTRODUCTION

(Gusfield 1997) contains an excellent description on how a suffix tree
can be built efficiently and what it can be used for. Informally, the
main task (although many other applications are also described) is to
search for a pattern P in a text T. The text T is stored in a suffix
tree, which takes O(|T|) to build and once the suffix tree is built,
searching for an occurence of pattern P will only take O(|P|). If all
occurences of a pattern P need to be found, it takes O(|P|+n) where n
is the number of occurences.


# WHAT CAN BE FOUND IN THIS PACKAGE

The package is divided into two directories:
template/
nontemplate/
Both directories essentially contain the same source files:
suffixtree.h
suffixtree_inter.h
suffixtree_impl.h
suffixtree_impl.cpp
main.cpp
The only difference is that the template directory contains source
code of template classes, allowing suffix trees containing various
data types in one implementation. The nontemplate directory contains
source code of classes with a fixed container type.
Note that the directories also contain a Makefile. This is an
*extremely* simple file, that needs some rewriting to get it to work.
Especially a number of explicit paths need to be changed.


# FILES

main.cpp:
This file contains a simple example program. It shows how the suffix
tree library can be used.

suffixtree.h:
This file contains the definition of the class suffixtree. It is this
class that should be used in any program code. Note that the
implementation and the interface of the suffixtree class is separated.

suffixtree_inter.h:
This file contains the suffixtree_inter class, which defines the user
interface for the suffixtree class.

suffixtree_impl.h:
This file contains the suffixtree_impl class, which defines the
implementation of the suffix trees.

suffixtree_impl.cpp:
This file contains the actualy implementation of the member functions
of the suffixtree_impl class.


# HOW TO USE

The suffixtree_inter class defines the functions available on the
suffix tree. For users who want to use a suffix tree to search
efficiently, these functions should be used. Each function in
suffixtree_inter.h contains a description of its functionality.

If the functionality of the suffixtree should be extended, a new class
can be defined, that derives from the suffixtree class. Since the
implementation (and that of the the support class, node) is protected,
direct manipulation of the suffixtree itself can be reached.


# PROBLEMS WITH THE TEMPLATE CLASS

At the moment, many c++ compilers do not have full template support.
(At least not as nice as I hoped it to be.) Therefore, the package
contains template and non-template versions. Both versions compile
using gcc version 3.2, but I have problems linking the template
version using GNU ld version 2.10.91 (with BFD 2.10.91.0.2). Please
let me know if you manage to compile the template version using a
repository (-frepo).

http://gcc.gnu.org/onlinedocs/gcc-3.2/gcc/Template-Instantiation.html
gives an overview of different ways to handle template classes in g++.

Please, let me know if you use the template version, how you managed
to get it to work.


# CONTACT

If you have any questions, bug reports, comments, or money you want to
donate to me :), you can always contact me at the most recent email
address found at the beginning of each file contained in the package.
Currently:
      Menno van Zaanen
      mvzaanen@uvt.nl
      ILK / Computational Linguistics
      Tilburg University
      P.O. Box 90153
      5000 LE Tilburg
      The Netherlands


# REFERENCES

Gusfield, D.  Algorithms on strings, trees, and sequences: computer
        science and computational biology, 1997
Ukkonen, E.  On-line construction of suffix-trees.
        Algorithmica, 14:249-260, 1995
