#ifndef __SORTED_H__
#define __SORTED_H__
#include <iostream>
#include "list.h"
class SortedList: public List{
public:
    int at(int);
    int first();
    int last();
    int size();
    void add(int);
    int find(int);
    bool remove(int);
    ~SortedList();
};

#endif
