/*******************************************************************************
** Menno van Zaanen
** mvzaanen@science.uva.nl    2001-2002
** mvzaanen@uvt.nl            2002-
********************************************************************************
** Filename: main.cpp
********************************************************************************
** This file is part of the suffix tree package.
********************************************************************************
** This file contains a very simple demo program that uses the suffix
** tree data type.
*******************************************************************************/

#include <iostream>
#include <string>
#include <vector>
#include "suffixtree.h"

using namespace std;
using namespace ns_suffixtree;

typedef suffixtree<string> st_string;

int
main()
{
   cout << "Give the text for the suffix tree (one line): " << endl;
   string word;
   cin >> word;

   cout << "Building suffix tree." << endl;
   st_string tree(word);

   cout << "Doing a self test." << endl;
   tree.self_test(word);

   cout << "Dump the tree on cout." << endl;
   cout << tree;
   cout << "what word to find in the suffix tree?" << endl;
   string word2;
   cin >> word2;
   try {
      st_string::size_type res=tree.find_position(word2);
      cout << "Found at least on pos " << res << endl;
   }
   catch (StringNotFound) {
      cout << "Not in the tree" << endl;
   }
   vector<st_string::size_type> result;
   result=tree.find_all_positions(word2);
   cout << "Found on all position(s): ";
   for (vector<st_string::size_type>::const_iterator b=result.begin();
         b!=result.end(); b++) {
      cout << *b << " ";
   }
   cout << endl;
}
// end of file: main.cpp