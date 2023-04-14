/*******************************************************************************
** Menno van Zaanen
** mvzaanen@science.uva.nl    2001-2002
** mvzaanen@uvt.nl            2002-
********************************************************************************
** Filename: suffixtree.h
********************************************************************************
** This file is part of the suffix tree package.
********************************************************************************
** This file contains the definitions of the class used in the
** suffixtree package that combines the user interface and the actual
** implementation of the suffix tree. The class suffixtree contains the
** functionality of a suffix tree. It is defined in the ns_suffixtree
** namespace. It combines the user interface defined in the
** suffixtree_inter class with the implementation defined in the
** suffixtree_impl class. 
*******************************************************************************/

#ifndef __suffixtree__
#define __suffixtree__

#include <iostream>
#include <map>
#include <string>
#include "suffixtree_inter.h"
#include "suffixtree_impl.h"

using std::map;
using std::string;
using std::pair;
using std::ostream;

namespace ns_suffixtree {

class StringNotFound; // Exception

class suffixtree
   :public suffixtree_impl, public suffixtree_inter {
public:
      typedef string value_type;
      typedef value_type::size_type size_type;

      // suffixtree creates an instance of the suffixtree class. The
      // value of v is used to build the suffixtree.
      suffixtree(value_type v):suffixtree_impl(v) {}
      // ~suffixtree destructor.
      ~suffixtree() {}

      // find_position returns a position if w is present in the
      // suffixtree and otherwise it raises a StringNotFound
      // exception. w need not be a suffix. empty strings will not be
      // found.
      size_type find_position(value_type w) const {
         return suffixtree_impl::find_position(w);
      }
      // find_all_positions finds all positions of substring w occurring
      // in the suffix tree. empty strings will not be found.
      vector<size_type> find_all_positions(value_type w) const {
         return suffixtree_impl::find_all_positions(w);
      }
      // self_test returns true if all affixes of word can be found in
      // the suffixtree and it returns false if it doesn't.  It may dump
      // some debug information on cerr.
      bool self_test(value_type s) const {
            return suffixtree_impl::self_test(s);
      }
      // print writes the suffixtree on os.
      void print(ostream& os) const {
            suffixtree_impl::print(os);
      }
protected:
private:
};

// operator<< writes t on os using the print function of the
// suffixtree class.
ostream&
operator<<(ostream& os, const suffixtree& t) { t.print(os); return os; }

}
#endif // __suffixtree__
// end of file: suffixtree.h
