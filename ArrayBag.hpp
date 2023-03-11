#ifndef ARRAY_BAG_
#define ARRAY_BAG_
#include <iostream>
#include <vector>

template <class ItemType>
class ArrayBag
{

public:
  /** default constructor**/
  ArrayBag();

  /**
     @return item_count_ : the current size of the bag
  **/
  int getCurrentSize() const;

  /**
     @return true if item_count_ == 0, false otherwise
  **/
  bool isEmpty() const;

  /**
     @return true if new_entry was successfully added to items_, false otherwise
  **/
  bool add(const ItemType& new_entry);

  /**
     @return true if an_entry was successfully removed from items_, false otherwise
   **/
  bool remove(const ItemType& an_entry);

  /**
     @post item_count_ == 0
   **/
  void clear();

  /**
     @return true if an_entry is found in items_, false otherwise
     **/
  bool contains(const ItemType& an_entry) const;

  /**
    @return the number of times an_entry is found in items_
  **/
  int getFrequencyOf(const ItemType& an_entry) const;

  /**
    @param:   A reference to another ArrayBag object
    @post:    Combines the contents from both ArrayBag objects, including duplicates, adding items from the argument bag as long as there is space.
    Example: [1, 2, 3] += [1, 4] will produce [1, 2, 3, 1, 4]
    operator+=
  **/
   void operator+=(const ArrayBag<ItemType>& another_array_bag_); //Removed <ItemType> from const ArrayBag
  /** 
    @param:   A reference to another ArrayBag object
    @post:    Combines the contents from both ArrayBag objects, EXCLUDING duplicates.
    Example: [1, 2, 3] += [1, 4] will produce [1, 2, 3, 4]
    operator/=
  **/   
   void operator/=(const ArrayBag<ItemType>& another_array_bag_); //Removed <ItemType> from const ArrayBag




protected:
  static const int DEFAULT_CAPACITY = 10; //max size of items_ at 10 by default for this project
  ItemType items_[DEFAULT_CAPACITY];      // Array of bag items
  int item_count_;                        // Current count of bag items

  /**
     @param target to be found in items_
     @return either the index target in the array items_ or -1,
     if the array does not contain the target.
     **/
  int getIndexOf(const ItemType& target) const;

}; // end ArrayBag

#include "ArrayBag.cpp"
#endif