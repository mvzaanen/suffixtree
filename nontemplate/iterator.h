/*******************************************************************************
** Menno van Zaanen
** mvzaanen@uvt.nl            2002-
********************************************************************************
** Filename: iterator.h
********************************************************************************
** This file is part of the suffix tree package.
********************************************************************************
** This file contains the implementation of some iterator classes.
** These classes can be used to ``walk through'' a suffixtree. The
** iterators are implemented according to the design patterns book
** (not as in the STL standard).
** Iterators are defined in the ns_suffixtree namespace.
*******************************************************************************/

#ifndef __iterator__
#define __iterator__

#include <vector>
#include "suffixtree_impl.h"

namespace ns_suffixtree {

class OutOfBounds {}; // Exception

class abstract_suffixtree_iterator {
// abstract_suffixtree_iterator is a generic iterator abstract base
// class. Concrete iterators should be derived from this class to
// allow a generic interface.
public:
   typedef suffixtree_impl::value_type value_type;
   typedef suffixtree_impl::size_type size_type;
   typedef suffixtree_impl::element_type element_type;

   // first sets the iterator to the first element of the suffixtree
   virtual void first() { current=&tree.root; }
   // next returns a vector of possible continuations from the current
   // position in the suffixtree. If one of the elements is used in
   // the next function (with argument), it is guaranteed not to throw
   // an exception.
   virtual vector<element_type> next() const=0;
   // next sets the iterator to the next element of the suffixtree
   // (with respect to the current position). It will throw a
   // OutOfBounds exception if the current position cannot be moved
   // towards the element_type of the argument.
   virtual void next(const element_type&)=0;
   // is_done returns true if the current position is on a leaf, false
   // if it points to an internal node.
   virtual bool is_done() const=0;
protected:
   // iterator constructor.
   abstract_suffixtree_iterator(const suffixtree_impl& st)
      :tree(st),current(&st.root) {}

   // protected friend member access... (tree and current)

   // current_begin returns the begin iterator of the current node.
   inline const suffixtree_impl::index current_begin() const {
      return current->begin();
   }
   // current_end returns the end iterator of the current node.
   inline const suffixtree_impl::index current_end() const {
      return current->end();
   }
   // current_number returns the number of the current node.
   inline const suffixtree_impl::size_type current_number() const {
      return current->give_number();
   }
   // children_size returns the number of children of the current
   // node.
   inline const size_type children_size() const {
      return current->children_size();
   }
   // next_children returns a vector of elements denoting the children
   // that can be reached from the current node.
   inline vector<element_type> next_children() const {
      return current->next_children();
   }
   // next_current sets current to the child that is reached using
   // element_type e. If that child does not exist, an OutOfBounds
   // exception is thrown.
   inline void next_current(const element_type& e) {
      const suffixtree_impl::node *next_node=current->find_child(e);
      if (next_node==0) {
         throw OutOfBounds();
      }
      current=next_node;
   }
   // current_leaf_positions returns a vector of leaf positions that
   // can be reached from the current node.
   inline vector<size_type> current_leaf_positions() const {
      return current->find_leaf_positions();
   }
private:
   const suffixtree_impl& tree;
   const suffixtree_impl::node* current;
};

class suffixtree_iterator:public abstract_suffixtree_iterator {
// suffixtree_iterator is a concrete iterator over a suffixtree. It is
// derived from the abstract_suffixtree_iterator class to allow for
// suffixtree implementation access. This iterator simply moves from
// node to node with access to the sequential data that is attached to
// the node.
public:
   // constructor
   suffixtree_iterator(const suffixtree_impl& st)
      :abstract_suffixtree_iterator(st) {}
   // first sets the iterator to the root node of the suffixtree.
   virtual void first() {
      abstract_suffixtree_iterator::first();
   }
   // next moves the iterator to the child that is reached with
   // element_type e (i.e. the child that has sequential data starting
   // with e). If there is no child that has sequential data starting
   // with e, then an OutOfBounds exception is thrown (by the
   // abstract_suffixtree_iterator next_current function).
   virtual void next(const element_type& e) {
      abstract_suffixtree_iterator::next_current(e);
   }
   // next without an argument returns a vector of element types.
   // These elements denote which children of the current node can be
   // reached.
   virtual vector<element_type> next() const {
      return abstract_suffixtree_iterator::next_children();
   }
   // size returns the number of children that can be reached from the
   // current node. If 0, then the node is a leaf (even though
   // sequential data may still be attached to it).
   virtual size_type size() const {
      return abstract_suffixtree_iterator::children_size();
   }
   // is_done returns true if the current node is a leaf, false if it
   // is not.
   virtual bool is_done() const { return size()==0; }
protected:
private:
};

}
#endif // __iterator__
// end of file: iterator.h
